#include <iostream>
using namespace std;


class Point{
	private:
		float x;
		float y;
	public:
		Point(){
			x=0;
			y=0;
			
		}
		Point(int a,int b){
			x=a;
			y=b;
		}
		void display(){
			cout<<"the x is "<<x<<" and the y is "<<y<<endl;
		}
		
	
	
};
int main(){
	Point p1=Point();
	Point p2=Point(1,2);
	p1.display();
	p2.display();
	
	
	return 0;
}

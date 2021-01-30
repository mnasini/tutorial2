#include <iostream>
#include <math.h>
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
		Point(float a,float b){
			x=a;
			y=b;
		}
		void display(){
			cout<<"the x is "<<x<<" and the y is "<<y<<endl;
		} 
		 void distance(Point other){
			float val=0.0;
			val=sqrt(pow(other.x-x,2)+pow(other.y-y,2));
			cout<<"the distance between the tho points is "<<val<<endl;
			
	}
		
	
	
};


int main(){
	Point p1=Point();
	Point p2=Point(2,2);
	p1.display();
	p2.display();
	p1.distance(p2);

	
	
	return 0;
}

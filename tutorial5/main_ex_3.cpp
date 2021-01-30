#include <iostream>
#include "exercise3.hpp"
using namespace std;
int main(){
	float x1;
	float y1;
	float x2;
	float y2;
	Point p1=Point();
	Point p2=Point(2,2);
	p1.display();
	p2.display();
	cout<<"now we will test the distance between two user defined objects points: "<<endl<<"insert the x1(x of the first point):"<<endl;
	cin>>x1;
	cout<<"insert y1:"<<endl;
	cin>>y1;
	cout<<"insert x2:"<<endl;
	cin>>x2;
	cout<<"insert y2:"<<endl;
	cin>>y2;
	Point p3=Point(x1,y1); //first object point 
	Point p4=Point(x2,y2); //second object point
	p3.distance(p4);       //calling the method distance from point (giving as a parameter another point)
	
	

	
	system("pause");
	return 0;
}

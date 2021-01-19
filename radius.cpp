#include <iostream>
#include <math.h>
using namespace std;
void control(int x_centre,int y_centre,int radius, int x, int y){
	if((pow((x-x_centre),2)+pow((y-y_centre),2))<pow(radius,2)){
		cout<<"is inside";
	
		
	}
	else{
		cout<<"not inside";
	}
	
	
}
int main(){
	int x_centre;
	int y_centre;
	unsigned int radius;
	int x;
	int y;
	cout<<"insert x_center ";
	cin>>x_centre;
	cout<<"insert y_center ";
	cin>>y_centre;
	cout<<"insert radius ";
	cin>>radius;
	cout<<"insert x ";
	cin>>x;
	cout<<"insert y ";
	cin>>y;
	control(x_centre,y_centre,radius,x,y);
	
	
		
}

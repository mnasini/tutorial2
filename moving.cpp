#include <iostream>
#include <math.h>
using namespace std;

void position(double initial_speed,double initial_position,double accelleration,double times,double time){
	float count=0;
	for (int i=0;i<times;i++){
		cout<<"at time "<<count<<" the position is "<<initial_position+(initial_speed*count)+1.0/2.0*(accelleration)*pow(count,2)<<endl;
		count=count+time;
	}


}
	
	

int main(){
double initial_speed;
double initial_position;
double times;
double accelleration;
double time;
cout<<"insert initial speed "<<endl;
cin>>initial_speed;
cout<<"insert initial position "<<endl;
cin>>initial_position;
cout<<"insert accelleration "<<endl;
cin>>accelleration;
cout<<"how many time to you want to display the position of the moving body "<<endl;
cin>>times;
cout<<"how often (in seconds) do you want to update the position of the moving object "<<endl;
cin>>time;
position(initial_speed,initial_position,accelleration,times,time);
}

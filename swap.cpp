#include <iostream>
using namespace std;


void swap(int &a,int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	
	
}

int main(){
	int x;
	int y;
	cout<<"inserisci il primo numero "<<endl;
	cin>>x;
	cout<<"inserisci il secondo numero "<<endl;
	cin>>y;
	swap(x,y);
	cout<<"il primo numero ora e' "<<x<<" e il secondo numero ora e' "<<y<<endl;
	
}

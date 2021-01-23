#include <iostream>
using namespace std;
int main(){
	int i=3;
	int f[i]={0,1,2};
	i=i+1;
	f[3]=6;
	cout<<f[3];
	int *g=new int[10];
	g[200]=3;
	cout<<g[200]<<endl;

	
	
	
}

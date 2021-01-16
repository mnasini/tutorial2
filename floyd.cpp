#include <iostream>
using namespace std;

void floyd(int n){
	int count=1;
	int last=1;
	for (int i=1;i<=n;i++){
		for(int f=last;f<=count;f++){
			cout<<f<<" ";
			last=f+1;
			
		}
		cout<<endl;
		count=last+i;
	}
	
	
}

int main(){
	int n;
	cout<<"insert n"<<endl;
	cin>>n;
	floyd(n);
	
	
}

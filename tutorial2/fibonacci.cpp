#include <iostream>
using namespace std;

int fib(int n);


int main(){
	int n;
	cout<<"insert n"<<endl;
	cin>>n;
	cout<<fib(n)<<endl;
	
	
	
}


int fib(int n){
	int a=0;
	int b=1;
	int last;
	if(n==0){
		return 0;
	}
	if (n==1){
		return 1;
	}
	for (int i=2;i<=n;i++){
		last=a+b;
		a=b;
		b=last;
	}
	
return last;
}

#include <iostream>
using namespace std;
int count=0;
int fib(int n);


int main(){
	
	int n;
	cout<<"insert n"<<endl;
	cin>>n;
	cout<<"the "<<n<<"th fibonacci is "<<fib(n)<<endl;
	cout<<"and the function was called "<<::count<<" times";
	
	
}


int fib(int n){    
	
	::count=::count+1;
	if (n==0){
		
		return 0;
	}
	if (n==1){
		
		return 1;
	}

	
return fib(n-1)+fib(n-2);
}

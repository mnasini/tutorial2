/*it seems at a first glance that the second recursive relation is slower, and thats because the number of recursive calls is higher in the second
recursive relation, hoever applying the master theorem we'll easily see that they both have complexity of O(n) that means that the number of recursive 
calls in both functions grows linearly as n(the exponent) grows.
In the second recursive relation we however see that we are actually computing each subproblem twice, for each recursive call and if we save the each temporary solution
we are able to optimize the code up to O(log(n))*/


#include <iostream>
using namespace std;
int count2=0;
int count1=0;
int pow2(int a,int n){
	::count2=::count2+1;
	if (n==0){
		return 1;
		
	}
	if (n%2==0){
		return pow2(a,n/2)*pow2(a,n/2);
	}else{
		return a*pow2(a,n/2)*pow2(a,n/2);
	}
	
	
}

int pow1(int a,int n){
	::count1=::count1+1;
	if (n==0){
		return 1;
		
	}
	return a*pow1(a,n-1);
	
	
}


int main(){
	int a;
	int n;
	cout<<"insert base"<<endl;
	cin>>a;
	cout<<"insert exponent"<<endl;
	cin>>n;
	cout<<"the power using the first recursive relation is "<<pow1(a,n)<<endl;
	cout<<"this function was called "<<::count1<<" times"<<endl;
	cout<<"the power using the second recursive relation is "<<pow2(a,n)<<endl;
	cout<<"this function was called "<<::count2<<" times"<<endl;
	
	return 0;

}







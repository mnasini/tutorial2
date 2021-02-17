#include <iostream>
#include <string>
using namespace std;



/*class StackI {
public:
virtual void push(T t) = 0;
virtual void pop() = 0;
virtual T top() =0;
virtual void print()=0;
};
*/

template <typename T>
class Stack {

	private:
		int elements;
		int current;
		T *list;
		
	public:
		Stack(int elem){
			elements=elem;
			list=new T[elem];
			current=0;
			
		}
		Stack(){
			elements=20;
			list=new T[elements];
			current=0;
		}
		~Stack(){
			delete [] list;
			cout<<"stack successfully deleted"<<endl;

		} 
		T top(){
			if (current==0){ 
		cout<<"EmptyStackException"<<endl; // here i should raise an actual exception
		return 0;
			}
		return list[current];
				
			}	
			
		void push(T t){
			current=current+1;
			if (current>elements){
				current=current-1;
					cout<<"FullStackException"<<endl; 
					
			}else{
			
			list[current]=t;
			cout<<"value added"<<endl;
		}
		}
		void pop(){
			current=current-1;
			if (current<0){
				current=current+1;
				cout<<"EmptyStackException"<<endl;
			}
		}
		void print(){
			if(current==0){
				cout<<"[]"<<endl;
			}else{
			
			cout<<"[";
			for (int i=current;i>0;i--){
				cout<<list[i];
				
				cout<<((i==1) ? "]": " ");
			}
		}
		cout<<endl;
		}
		
};

int main(){
	
	Stack <int>ciao(5);  //creation of a stack of maximum 5 elements of int type
	ciao.push(3);
	ciao.push(10);
	ciao.push(15);
	ciao.push(98);
	cout<<"the stack is: "<<endl;
	ciao.print();
	cout<<"the top element is: ";
	cout<<ciao.top()<<endl;
	cout<<"now i'll remove the top...."<<endl;
	ciao.pop();
	cout<<"the new top is: "<<ciao.top()<<endl;
	cout<<"the new stack is: ";
	ciao.print();
	cout<<endl;
	cout<<"deleting the stack..."<<endl;
	// class ciao will go out of scope here so destructor will be called, i could also have allocated the object ciao dyamically (on heap) to have the possibility of deallocating it
	
	//with the command delete 

	
	
	
	return 0;
}

#include <iostream>
#include "exercise3.hpp"
using namespace std;
int main(){
	Point p1=Point();
	Point p2=Point(2,2);
	p1.display();
	p2.display();
	p1.distance(p2);

	
	system("pause");
	return 0;
}

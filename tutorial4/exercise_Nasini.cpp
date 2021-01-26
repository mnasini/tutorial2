#include <iostream>
#include <math.h>
using namespace std;

double * read_poly(int &n){
  cout << "il grado: ";
  cin >> n;
  double * c=new double[n+1];
  for(int i=0;i<=n;i++){
    cout << "coefficient of degree " << i << ": ";
    cin >> c[i];
  }
  return c;
}

double evaluate(double &x,double *pol,int &grado){
	double val=0.0;
	cout<<"insert point to evaluate"<<endl;
	cin>>x;
	for(int i=0;i<=grado;i++){
		
		val=val+pol[i]*pow(x,i);
		
	}
	
return val;	
}


void print_poly(double *c, int n){
  int i;
  cout << c[0];
  if(n>0)
    cout << " + ";
  for(i=1;i<n;i++)
    cout << c[i] << "*x^" << i << " + ";
  if(n>0)
    cout << c[n] << "*x^" << i;
  cout << endl;
}

int main()
{
  double *p1;
  int g1;
  double point;
  double position;

  p1=read_poly(g1);
  print_poly(p1,g1);
  position=evaluate(point,p1,g1);
  cout<<"the position is "<<position<<endl;

  delete[] p1;
  return 0;
}

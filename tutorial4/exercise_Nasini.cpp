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
  return c; // array (dont need reference cause already first adress)
}



// function that evaluate the polinomial for a given point
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
//function that given 2 polinomials and its degrees, will sum them 
double * poli_sum(){
	
	
	
}

int main()
{
  double *p1;
  int g1; 
  int g2;// degree first term
  int g3; // degree second term 
  int gres;// degree result
  double point;
  double position;
  double *first_pol;
  double *second_pol;
  double *sum_res;
  double *mul_res;
  

  p1=read_poly(g1);
  print_poly(p1,g1);
  position=evaluate(point,p1,g1);
  cout<<"the position is "<<position<<endl;
  cout<<"now we will sum 2 polynomials"<<endl;
  first_pol=read_poly(g2);
  print_poly(first_pol,g2);
  second_pol=read_poly(g3);
  print_poly(second_pol,g3);
  //sum_res=

  delete[] p1;
  delete[] first_pol;
  delete[] second_pol;
  delete[] sum_res;
  //delete[] mul_res;
  return 0;
}

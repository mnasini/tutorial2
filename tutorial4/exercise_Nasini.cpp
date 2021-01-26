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
double * poli_sum(double *first_pol,double *second_pol,int &g2,int &g3,int &gres){
	
	
	int max= (g2 >= g3) ? g2 : g3;
	gres=max;
	double *pol=new double[gres+1];
	for(int f=0;f<=gres;f++){
		pol[f]=0;
	}
	
	for(int i=0;i<=gres;i++){
		if (g2>=i){
			pol[i]=pol[i]+first_pol[i];
		}
		if (g3>=i){
			pol[i]=pol[i]+second_pol[i];
		}
		
	}
	
	return pol;
}

//this function returns a resulting polinomials thet is  the product of two polinomials 
double * poli_mul(double *first_pol,double *second_pol,int &g2, int &g3,int &gres){
	gres=g2+g3;
	double *pol=new double[gres+1];
		for(int f=0;f<=gres;f++){
		pol[f]=0;
	}
	for(int i=0;i<=g3;i++){
		for (int g=0;g<=g2;g++){
			pol[i+g]=pol[i+g]+(second_pol[i]*first_pol[g]);
			
		}
	}
	
	return pol;
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
  sum_res=poli_sum(first_pol,second_pol,g2,g3,gres);
  cout<<"the resulting sum of the two polinomial is: "<<endl;
  print_poly(sum_res,gres);
  mul_res=poli_mul(first_pol,second_pol,g2,g3,gres);
  cout<<"the resulting multiplication of the two polinomial is: "<<endl;
  print_poly(mul_res,gres);

  delete[] p1;
  delete[] first_pol;
  delete[] second_pol;
  delete[] sum_res;
  //delete[] mul_res;
  return 0;
}

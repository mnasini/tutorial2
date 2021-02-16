#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Date{
	private:
		int day;
		int month;
		int year;
	public:
		Date(int d,int m,int y){
			day=d;
			month=m;
			year=y;
		}
		Date(){
			day=0;
			month=0;
			year=0;
		}
		int getd(){return day;};
		int getm(){return month;};
		int gety(){return year;};
			
		};

class Blood{
	private:
		int systolic;
		int dyastolic;
		Date date;
	public:
		Blood(int s,int d,Date dat){
			systolic=s;
			dyastolic=d;
			
			date=dat;
		}
		Date showdate(){
			return date;
		}
		int showsyst(){
			return systolic;
		}
		int showdiastol(){
			return dyastolic;
		}
};

		
class Patient{
	private:
		string name;
		vector <Blood> data;
	
	public:
		Patient(string a){
			name=a;
		}
		void addrecord(Blood b){
			data.push_back(b);
			cout<<"data added"<<endl;
			
		}
		void printReport(){
			cout<<"the highest abnormal blood pressures of "<<name<<":"<<endl;
			for(int i=0;i<data.size();i++){
				if(data[i].showsyst()>140){
					cout<<"day: "<<data[i].showdate().getd()<<"/"<<data[i].showdate().getm()<<"/"<<data[i].showdate().gety()<<" systolic value: "<<data[i].showsyst()<<" distolic value: "<<data[i].showdiastol()<<endl;
				}
				
			}
			
		}
		
	
};



int main(){
Patient mary("Mary");
mary.addrecord(Blood(94,61, Date(2,5,2013)));
mary.addrecord(Blood(97,65, Date(3,5,2013)));
mary.addrecord(Blood(144,99, Date(4,5,2013)));
mary.addrecord(Blood(123,88, Date(5,5,2013)));
mary.addrecord(Blood(177,110, Date(6,5,2013)));
mary.addrecord(Blood(145,89, Date(7,5,2013)));
mary.printReport();

	return 0;
}

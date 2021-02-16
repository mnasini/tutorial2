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
			int f=0;
			int som=0;
			int max=0;
			int index;
			float aver;
			cout<<"the highest abnormal blood pressures of "<<name<<":"<<endl;
			for(int i=0;i<data.size();i++){
				som=som+data[i].showdiastol();
				if(data[i].showsyst()>=max){
					max=data[i].showsyst();
					index=i;
				}
				if(data[i].showsyst()>140){
					f++;
					cout<<"day: "<<data[i].showdate().getd()<<"/"<<data[i].showdate().getm()<<"/"<<data[i].showdate().gety()<<" systolic value: "<<data[i].showsyst()<<" diastolic value: "<<data[i].showdiastol()<<endl;
				}
				
				
			}
			if (f==0){
					cout<<"no measurement was too high"<<endl;
				}
				aver=float(som)/float(data.size());
				cout<<"the average diastolic blood pressure was: "<<aver<<endl;
				cout<<"the highest systolic pressure record is: "<<endl<<"day: "<<data[index].showdate().getd()<<"/"<<data[index].showdate().getm()<<"/"<<data[index].showdate().gety()<<" systolic value: "<<data[index].showsyst()<<" diastolic value: "<<data[index].showdiastol()<<endl;
			
		}
		
	
};



int main(){
	//inserting data for mary
Patient mary("Mary");
mary.addrecord(Blood(94,61, Date(2,5,2013)));
mary.addrecord(Blood(97,65, Date(3,5,2013)));
mary.addrecord(Blood(144,99, Date(4,5,2013)));
mary.addrecord(Blood(123,88, Date(5,5,2013)));
mary.addrecord(Blood(177,110, Date(6,5,2013)));
mary.addrecord(Blood(145,89, Date(7,5,2013)));
//inserting data for john
Patient john("John");
john.addrecord(Blood(88,57, Date(15,5,2013)));
john.addrecord(Blood(95,61, Date(16,5,2013)));
john.addrecord(Blood(114,80, Date(17,5,2013)));
john.addrecord(Blood(151,96, Date(18,5,2013)));
john.addrecord(Blood(176,104, Date(19,5,2013)));
john.addrecord(Blood(176,110, Date(20,5,2013)));

//printing report for mary
mary.printReport();
cout<<"\n"<<endl;
//printing report for john 
john.printReport();

	return 0;
}

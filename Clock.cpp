#include <iostream>
using namespace std;
class clocktype
{
	private:int hr,min,sec;
	
	public:void settime(int,int,int);
		   void gettime(int&,int&,int&);
		   void printtime()const;
		   void incrementseconds();
		   void incrementMinutes();
		   void incrementHours();
		   void sum(clocktype&,clocktype&)ss;
		   bool equaltime(const clocktype&)const;
};
int main()
{
	clocktype myclock,yourclock,sumclock;
	int hours,minutes,seconds;
	myclock.settime(5,4,30);
	cout<<"myclock :";
	myclock.printtime();
	cout<<endl;
	cout<<"yourclock";
	yourclock.printtime();
	cout<<endl;
	yourclock.settime(5,45,16);
	cout<<"After settingn yourclock :";
	yourclock.printtime();
	cout<<endl;
	if(myclock.equaltime(yourclock))
		cout<<"Both times are equal"<<endl;
	else
		cout<<"Two times are not equal."<<endl;
	cout<<"Enter the hours,minutes amd seconds :";
	cin>>hours>>minutes>>seconds;
	cout<<endl;
	myclock.settime(hours,minutes,seconds);
	cout<<"New myclock :";
	myclock.printtime();
	cout<<endl;
	myclock.sum(yourclock,sumclock);
	myclock.printtime();
	yourclock.printtime();
	sumclock.printtime();
	myclock.incrementseconds();
	cout<<"After incrementing myclock by 1 second :";
	myclock.printtime();
	cout<<endl;
	cout<<"Hours = "<<hours<<"Minutes = "<<minutes<<"Seconds = "<<seconds<<endl;
	cout<<"Let us synchronize both clocks"<<endl;
	yourclock=myclock;
	if(myclock.equaltime(yourclock))
		cout<<"Both times are equal."<<endl;
	else
		cout<<"Two times are not equal."<<endl;
}
void clocktype :: settime(int hrs,int mins,int secs)
{
	if(0<=hrs && hrs<24)
		hr=hrs;
	else
		hr=0;
	if(0<=mins && mins<60)
		min=mins;
	else
		min=0;
	if(0<=secs && secs<60)
		sec=secs;
	else
		sec=0;
}
void clocktype :: gettime(int& hrs,int& mins,int& secs)
{
	hrs=hr;
	mins=min;
	secs=sec;
}
void clocktype :: printtime()const
{
	if(hr<10)
		cout<<"0";
	cout<<hr<<":";
	if(min<10)
		cout<<"0";
	cout<<min<<":";
	if(sec<10)
		cout<<"0";
	cout<<sec<<endl;
}
void clocktype :: incrementseconds()
{
	sec++;
	if(sec>59)
	{
		sec=0;
		incrementMinutes();
	}
}
void clocktype :: incrementMinutes()
{
	min++;
	if(min>59)
	{
		min=0;
		incrementHours();
	}
}
void clocktype :: incrementHours()
{
	hr++;
	if(hr>23)
	{
		hr=0;
	}
}
bool clocktype :: equaltime(const clocktype& otherclock)const
{
	return(hr==otherclock.hr && min==otherclock.min && sec==otherclock.sec);
}
void clocktype::sum(clocktype& otherclock,clocktype& sumclock)
{
	sumclock.sec=sec+otherclock.sec;
	if(sumclock.sec>59)
	{
		sumclock.sec=sumclock.sec-60;
		incrementMinutes();
	}
	sumclock.min=min+otherclock.min;
	if(sumclock.min>59)
	{
		sumclock.min=sumclock.min-60;
		incrementHours();
	}
	sumclock.hr=hr+otherclock.hr;
	if(sumclock.hr>23)
		sumclock.hr=sumclock.hr-24;
}

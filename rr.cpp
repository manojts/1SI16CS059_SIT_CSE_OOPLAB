#include <iostream>
using namespace std;
int& fnMaximum(int&,int&);
int main()
{
	int ival1,ival2;
	cout<<"\nEnter two positive numbers:"<<endl;
	cin>>ival1>>ival2;
	cout<<"\n Values are : val1:"<<ival1<<"val2: "<<ival2<<endl;
	fnMaximum(ival1,ival2)=0;
	cout<<"\n Values are : val1:"<<ival1<<"val2: "<<ival2<<endl;
	return 0;
}
int& fnMaximum(int &a,int &b)
{
	if(a>b)
		return a;
	else
		return b;
}

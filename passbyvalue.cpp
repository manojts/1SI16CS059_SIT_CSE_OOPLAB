#include <iostream>
using namespace std;
void fnSumDiff(int,int,int&,int&);
int main()
{
	int ia,ib,is=0,id=0;
	cout<<"Enter two integers\n";
	cin>>ia>>ib;
	fnSumDiff(ia,ib,is,id);
	cout<<"sum = "<<is<<endl;
	cout<<"Diff = "<<id<<endl;
	return 0;
}
void fnSumDiff(int ia,int ib,int &is,int &id)
{
	is=ia+ib;
	id=ia-ib;
}

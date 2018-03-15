#include <iostream>
#include <cmath>
using namespace std;
class complexType
{
	private:int ireal,iimg;
	public: void fnSetVal(int iv1,int iv2)
			{
				ireal=iv1;
				iimg=iv2;
			}
			void fnDisplayCplx()
			{
				cout<<"("<<ireal<<"+i"<<iimg<<")"<<endl;
			}
			void fnAddCplx(complexType c2)
			{
				complexType sum;
				sum.ireal=ireal+c2.ireal;
				sum.iimg=iimg+c2.iimg;
				cout<<"\n The sum is :"<<endl;
				sum.fnDisplayCplx();
			}
};
int main()
{
	complexType c1,c2;
	int irealp,iimgp;
	cout<<"\nEnter the real and imaginary part of first complex number :"<<endl;
	cin>>irealp>>iimgp;
	c1.fnSetVal(irealp,iimgp);
	cout<<"\nEnter the real and imagianry part of second complex number :"<<endl;
	cin>>irealp>>iimgp;
	c2.fnSetVal(irealp,iimgp);
	cout<<"\nFirst complex number :"<<endl;
	c1.fnDisplayCplx();
	cout<<"\nSecond complex numbeer :"<<endl;
	c2.fnDisplayCplx();
	c1.fnAddCplx(c2);
	cout<<"\nmemory allocated to object c1 is "<<sizeof(c1)<<"bytes"<<endl;
	return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	const int x=7;
	cout<<"The value of const variable x is :"<<x<<endl;
	const int arraysize=5;
	int s[arraysize];
	for(int i=0;i<arraysize;i++)
		s[i]=2+2*i;
	cout<<"Elements "<<setw(13)<<"Values "<<endl;
	for(int j=0;j<arraysize;j++)
		cout<<setw(7)<<j<<setw(13)<<s[j]<<endl;
	return 0;
}

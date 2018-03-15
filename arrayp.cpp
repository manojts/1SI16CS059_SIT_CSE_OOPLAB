#include <iostream>
using namespace std;
int main()
{
	int *ptr;
	int iarr[10],i	;
	ptr=iarr;
	cout<<"\nEnter array elements \n";
	for(i=0;i<5;i++)
		cin>>ptr[i];
	cout<<"\nArray contents are \n";
	for(i=0;i<5;i++)
		cout<<iarr[i];
	return 0;
}

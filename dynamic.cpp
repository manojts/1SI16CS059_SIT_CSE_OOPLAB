#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int *ptr;
	int size,i;
	ptr=new int;
	*ptr=12;
	cout<<"Value in the dynamic memory allocatedlock is "<<*ptr<<endl;
	delete ptr;
	cout<<"Enter array size :";
	cin>>size;
	srand(time(NULL));
	try
	{
		ptr=new int[size];
		for(i=0;i<size;i++)
			*(ptr+i)=rand()/100;
		cout<<"Array contents\n";
		for(i=0;i<size;i++)
			cout<<ptr[i]<<"\n";
		cout<<endl;
		delete []ptr;
	}catch(bad_alloc ba)
	{
		cout<<"Allocation error..."<<endl;
	}
	return 0;
}

#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	float *ptr,avg;
	int size,i,sum=0;
	cout<<"Enter the number of months"<<endl;
	cin>>size;
	ptr=new float[size];
	for(i=0;i<size;i++)
	{
		*(ptr+i)=((rand()%2000)+2000)/100;
	}
	for(i=0;i<size;i++)
	{
		sum=sum+(*ptr+i);
	}
	avg=sum/size;
	cout<<"Average rainfall :      "<<avg<<"%"<<endl;
}

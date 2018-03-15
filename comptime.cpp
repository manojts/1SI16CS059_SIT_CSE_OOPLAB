#include <iostream>
using namespace std;
void fnComputeTime(double=40,double=29);
int main()
{
	fnComputeTime();
	fnComputeTime(70);
	fnComputeTime(30,20);
	return 0;
}
void fnComputeTime(double vel,double dist)
{
	cout<<"The computed time is "<<dist/vel<<" hours"<<endl;
}

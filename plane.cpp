#include <iostream>
#include <cmath>
using namespace std;
class planeType
{
	private:int ix,iy;
	public:void fnsetloc(int iv1,int iv2)
		   {
		   		ix=iv1;
		   		iy=iv2;
		   }
		   void fnShowLoc()
		   {
		   		cout<<"("<<ix<<","<<iy<<")"<<endl;
		   }
		   void fnDistOrigin()
		   {
		   		double ddist=0;
		   		ddist=sqrt((ix*ix)+(iy*iy));
		   		cout<<"Distance from origin is "<<ddist;
		   }
		   void fnDistLoc(planeType c1)
		   {
		   		double ddist;
		   		ddist=sqrt((ix-c1.ix)*(ix-c1.ix)+(iy-c1.iy)*(iy-c1.iy));
		   		cout<<"\nDistance between two location objects is "<<ddist<<endl;
		   }
};
int main()
{
	planeType c1,c2;
	int iv1,iv2;
	cout<<"Enter the coordinates of first point:"<<endl;
	cin>>iv1>>iv2;
	c1.fnsetloc(iv1,iv2);
	cout<<"Enter the coordinates of second point:"<<endl;
	cin>>iv1>>iv2;
	c2.fnsetloc(iv1,iv2);
	cout<<"Plane 1"<<endl;
	c1.fnShowLoc();
	cout<<"Plane 2:"<<endl;
	c2.fnShowLoc();
	cout<<"Distance from the origin of first point:"<<endl;
	c1.fnDistOrigin();
	cout<<"\nDistance from the origin of second point:"<<endl;
	c2.fnDistOrigin();
	c2.fnDistLoc(c1);
	return 0;
}

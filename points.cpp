#include <iostream>
#include <cmath>
using namespace std;
typedef struct 
{
	int a,b;
}point;
typedef struct 
{
	point c;
	float r;
}circle;
void read_circle_details(circle *c1)
{
	cout<<"Enter the center and radius of the circle "<<endl;
	cin>>c1->c.a>>c1->c.b>>c1->r;
}
void display_circle_details(circle c1)
{
	cout<<"center:("<<c1.c.a<<","<<c1.c.b<<")\nradius: "<<c1.r<<endl;
}
double check_distance(point p1,point p2)
{
	return(sqrt((p2.a-p1.a)*(p2.a-p1.a)+(p2.b-p1.b)*(p2.b-p1.b)));
}
void check_circle(circle c1,circle c2)
{
	int x1=c1.c.a,x2=c2.c.a,y1=c1.c.b,y2=c2.c.b;
	if((x1==x2)&&(y1==y2))
	{
		cout<<"Both circles are concentric."<<endl;
	}
	else if(check_distance(c1.c,c2.c)<(c1.r+c2.r))
	{
		cout<<"Both circles intersect eachother"<<endl;
	}
	else if(check_distance(c1.c,c2.c)==(c1.r+c2.r))
	{
		cout<<"Both circles touches eachother"<<endl;
	}
	else
	{
		cout<<"two cirlces have no contact to each other"<<endl;
	}
}

int main()
{
	circle c1,c2;
	read_circle_details(&c1);
	read_circle_details(&c2);
	display_circle_details(c1);
	display_circle_details(c2);
	check_circle(c1,c2);
	return(0);
}

#include <iostream>
using namespace std;
void fnrepeatChar(char='*',int=10);
int main()
{
	fnrepeatChar();
	fnrepeatChar('a');
	fnrepeatChar('s',8);
	return 0;
}
void fnrepeatChar(char alph,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<alph<<endl;
	}
}

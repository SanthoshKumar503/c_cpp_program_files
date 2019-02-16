#include<iostream>
using namespace std;
class A
{
	public:
	int x,y;
	A(int a,int b)
	{
		x=a;
		y=b;	
	}	
	friend class B;
};
class B
{
		
};

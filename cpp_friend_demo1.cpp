#include<iostream>
using namespace std;
class A
{
	public:
		int x,y;
	public:
		A(int a,int b)
		{
			x=a;y=b;
		}
	friend void show(A a);
};
void show(A a)
{
 	cout<<endl<<"Sum of two numbers is:"<<a.x+a.y;
};
class B
{
	public:
	void showb(int i,int j)
	{
	A c=A(i,j);
	show(c);
	}
};
int main()
{
	int n,m,i,j;
	cout<<"Enter the two numbers:";
	cin>>n>>m;
	A a=A(n,m);
	show(a);
	
	B b;
	cout<<endl<<"Enter the two numbers";
	cin>>i>>j;
	b.showb(i,j);
	return 0;
}

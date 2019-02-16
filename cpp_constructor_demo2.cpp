#include<iostream>
using namespace std;
class con
{
	private:
		int x,y;
	public: 
	con(int a,int b)
	{
		x=a;
		y=b;
	}
	int getadd()
	{
		return x+y;
	}
};
int main()
{
	int n1,n2,r;
	cout<<"Enter the two numbers:";
	cin>>n1>>n2;
	con c=con(n1,n2);
	r=c.getadd();
	cout<<endl<<"Add of two:"<<r;
	return 0;
}

#include<iostream>
using namespace std;
class con
{
	private:
		int a,b;
	public: 
	con(int a,int b)
	{
		this->a=a;
		this->b=b;
	}
	int getadd()
	{
		return a+b;
	}
};
int main()
{
	int n1,n2,r;
	cout<<"Enter the two numbers:";
	cin>>n1>>n2;
	con *c;
	c=new con(n1,n2);
	r=c->getadd();
	cout<<endl<<"Add of two:"<<r;
	return 0;
}

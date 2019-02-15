#include<iostream>
using namespace std;
int count(int num1)
{
	int c=0;
	while(num1!=0)
	{
		c++;
		num1=num1/10;
	}
	return c;
};
int fact(int n,int c)
{
	int i,out=1;
	for(i=1;i<=c;i++)
	{
		out=out*n;
	}
	return out;
};
bool amstrongNum(int num)
{
	int c,r,sm=0,dummy=num;
	c=count(num);
	while(num!=0)
	{
		r=num%10;
		sm=sm+fact(r,c);
		num=num/10;
	}
	return dummy==sm;
};
int main()
{
	int nm;
	cout<<"Enter the number:";
	cin>>nm;
	bool res =amstrongNum(nm);
	if(res==true)
	cout<<"Entered number is amstrong";
	else
	cout<<"not amstrong";
	return 0;
}

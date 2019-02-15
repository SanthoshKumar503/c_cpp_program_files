#include<iostream>
using namespace std;
int perfect(int num)
{
	int i,s=0,d;
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			s=s+i;
		}
	}
	return s==num;
};
int main()
{
	int n;
	bool res;
	cout<<"Enter the number:";
	cin>>n;
	res=perfect(n);
	if(res==true)
	{
	cout<<"Entered numbers is perfect number";
	}
	else
	{
	cout<<"Entered numbers is not a perfect number";
	}
	return 0;
}

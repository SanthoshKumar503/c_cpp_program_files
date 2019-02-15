#include<iostream>
using namespace std;
int fact(int num)
{
	int i,f=1;;
	for(i=1;i<=num;i++)
	{
		f=f*i;
	}
	return f;
};
int main()
{
	int n,res;
	cout<<"Enter the number:";
	cin>>n;
	res=fact(n);
	cout<<res;
	return 0;
}

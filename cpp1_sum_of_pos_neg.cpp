#include<iostream>
using namespace std;
int main()
{
	signed int arr[100];
	signed n=0,p=0;
	int i,nu;
	cout<<"Enter the size of array:";
	cin>>nu;
	cout<<endl<<"enter the array elements:";
	for(i=0;i<nu;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<nu;i++)
	{
		if(arr[i]>0)
		p=p+arr[i];
		else
		n=n-arr[i];
	}
	cout<<"Positive sum is:"<<p<<endl<<"Negative sum is:"<<n;
	return 0;
}

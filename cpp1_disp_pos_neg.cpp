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
	cout<<"positive elements are"<<endl;
	for(i=0;i<nu;i++)
	{
		if(arr[i]>0)
		cout<<arr[i]<<" ";
	}
	cout<<endl<<"negative elements are"<<endl;
	for(i=0;i<nu;i++)
	{
		if(arr[i]<0)
		cout<<arr[i]<<" ";
	}
	return 0;
}

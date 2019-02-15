#include<iostream>
#include<string>
using namespace std;
struct bio
{
	std::string name;
	int age;
};
int main()
{
	struct bio b[100];
	int n,i,a;
	cout<<"Enter the number of candidates:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<endl<<"Enter the name:";
		cin>>b[i].name;
		cout<<endl<<"Enter the age:";
		cin>>b[i].age;
	}
	for(i=0;i<n;i++)
	{
		a=b[i].age;
		if(a<13)
		{
			cout<<b[i].name<<" is "<<b[i].age<<" and not a teen \t not eligible for voting"<<endl;
		}
		else if(a>12 && a<20)
		{
			cout<<b[i].name<<" is "<<b[i].age<<" and a teen\t";
			if(a>=18)
			cout<<"eligible for voting"<<endl;
		}
		else if(a>50)
		{
			cout<<b[i].name<<" is "<<b[i].age<<" and senior citizen\teligible for voting"<<endl;
		}
		else
		{
			cout<<b[i].name<<" is "<<b[i].age<<" and a Adult\teligible for voting"<<endl;
		}
		
	}
	return 0;
	
}


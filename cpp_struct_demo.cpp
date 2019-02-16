#include<iostream>
using namespace std;
struct student
{
	char name[20];
	int m1,m2,m3;
};
int main()
{
	struct student s;
	int total;
	float avg;
	cout<<"Enter the name:"<<endl;
	cin>>s.name;
	cout<<"Enter the m1:"<<endl;
	cin>>s.m1;
	cout<<"Enter the m2:"<<endl;
	cin>>s.m2;
	cout<<"Enter the m3:"<<endl;
	cin>>s.m3;
	total=s.m1+s.m2+s.m3;
	avg=total/3;
	cout<<"Name"<<"\t"<<"Marks 1"<<"\t"<<"Marks 2"<<"\t"<<"Marks 3"<<"\t"<<"Total"<<"\t"<<"Average"<<endl;
	cout<<s.name<<"\t"<<s.m1<<"\t"<<s.m2<<"\t"<<s.m3<<"\t"<<total<<"\t"<<avg;
	return 0;
}

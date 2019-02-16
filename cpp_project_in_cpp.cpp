#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct contact
{
	string name;
	string num;	
};
int main()
{
	struct contact c[100];
	ofstream out("phbook.txt");
	ifstream in("phbook.txt");
	int n;
	static int i=0;
	string s;
	cout<<"\t\t\t\tPhone Book"<<endl;
	do
	{
	cout<<endl<<"\t\t\t1 Add new\t2 List\t\t3 Exit";
	cout<<endl<<"Enter the choice:";
	cin>>n;
	switch(n)
	{
		case 1:
			system("cls");
		if(!out) 
		{
		cout << "Cannot open phone book file.\n";
		return 1;
		}
			cout<<"Enter your name:";
			cin>>c[i].name;
			out<<c[i].name<<" ";
			cout<<"Enter your numbrt:";
			cin>>c[i].num;
			out<<c[i].num<<endl;
			out.close();
			i++;
			break;
		case 2:
			system("cls");
			in>>s;
			cout<<s;
			in.close();
			break;
		case 3:
			exit(0);
			break;
	}
	cout<<endl<<"Press any key to continue";
	}while(true);
return 0;
}

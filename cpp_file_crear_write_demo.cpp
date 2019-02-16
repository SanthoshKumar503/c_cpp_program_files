#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream out("inventry.rad");
	if(!out) 
	{
		cout << "Cannot open INVENTORY file.\n";
		return 1;
	}
	out << "Radios " << 39.95 << endl;
	out << "Toasters " << 19.95 << endl;
	out << "Mixers " << 24.80 << endl;
	out.close();
	return 0;
}	


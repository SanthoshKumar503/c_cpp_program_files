#include<stdio.h>
#include<conio.h>
int count(int);
int main()
{
	int c=0;
	int (*p)(int);
	p=&count;
	printf("%d",&p);
	return 0;
}
int count(int a)
{
	a++;
	return a;
}

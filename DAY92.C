//day9.2.number of zero's in a given factorial
void main()
{
int num,z=0;
clrscr();
printf("Enter the factorial number:");
scanf("%d",&num);
while(num!=0)
{
 num=num/5;
 z=z+num;
}

printf("\n Number of zero's in factorial is:%d",z);
getch();
}
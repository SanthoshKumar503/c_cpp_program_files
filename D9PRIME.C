//day9 prime number or not
void main()
{
int num,i,count=0;
clrscr();
printf("Enter the number:");
scanf("%d",&num);
if(num==1 || num==2)
{
printf("prime number");
}
else
{
for(i=2;i<=num/2;i++)
{
if(num%i==0)
{
count++;
}
}
if(count==0)
{
printf("prime number");
}
else{
printf("Not a prime number");
}
}
getch();
}
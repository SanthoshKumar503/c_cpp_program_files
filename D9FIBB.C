//day9 Fibinocci series
void main()
{
int a,b,n,c=0,i;
clrscr();
printf("Enter two numbers and no.of iterations:");
scanf("%d%d%d",&a,&b,&n);
printf("%d,%d",a,b);
for(i=1;i<=n;i++)
{
c=a+b;
a=b;
b=c;
printf(",%d",c);
}
getch();
}
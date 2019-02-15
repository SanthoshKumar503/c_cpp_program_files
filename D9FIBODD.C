//day9 printing odd numbers in fibinocci series
void main()
{
int a,b,n,c,i;
clrscr();
printf("Enter the two numbers and no.of iterations:");
scanf("%d%d%d",&a,&b,&n);
printf("\n Fibinocci series of odd numbers is\n");
if(a%2!=0)
printf("%d",a);
if(b%2!=0)
printf(" %d",b);
for(i=1;i<=n;i++)
{
  c=a+b;
  a=b;
  b=c;
  if(c%2!=0)
  printf(" %d",c);
}
getch();
}
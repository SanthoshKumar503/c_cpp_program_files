//Day9 multiplication table of given number
void main()
{
int num,n,i,mul;
clrscr();
printf("Enter the number and number of times\n");
scanf("%d%d",&num,&n);
for(i=1;i<=n;i++)
{
mul=num*i;
printf("%d*%d=%d\n",num,i,mul);
}
getch();
}
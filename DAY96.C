//day9.6.divisiblility rule
void main()
{
int n,i;
clrscr();
printf("Enter the number:");
scanf("%d",&n);
printf("%d divisible by: ",n);
for(i=1;i<=11;i++)
{
if(n%i==0)
printf("%d ",i);
}
getch();
}
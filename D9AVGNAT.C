//day9 average of n natural numbers
void main()
{
int num,i,sum=0;
float avg;
clrscr();
printf("Enter the number:");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
sum=sum+i;
}
avg=sum/num;
printf("\nAverage of natural numbers\n%g",avg);
getch();
}
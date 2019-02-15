//day9.1.swapping two numbers using bitwise operator
void main()
{
int a,b;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("\n After swapping:%d,%d",a,b);
getch();
}
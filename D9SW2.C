//day9 swap number without using temp variable
void main()
{
int num1,num2;
clrscr();
printf("Enter two numbers:");
scanf("%d%d",&num1,&num2);
num1=num1+num2;
num2=num1-num2;
num1=num1-num2;
printf("Swapping of two numbers:%d,%d",num1,num2);
getch();
}

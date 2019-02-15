//day9 swap numbers with temp variable
void main()
{
int num1,num2,temp=0;
clrscr();
printf("Enter two numbers:");
scanf("%d%d",&num1,&num2);
temp=num1;
num1=num2;
num2=temp;
printf("swapping of two numbers:%d,%d",num1,num2);
getch();
}
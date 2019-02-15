//day9 calculator using switch case
void main()
{
int num1,num2,choice;
clrscr();
printf("Enter the two numbers:");
scanf("%d%d",&num1,&num2);
printf("Add=1\tSub=2\tMul=3\tDiv=4\n");
printf("Enter the choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("Addition:%d",num1+num2);
break;
case 2:printf("Addition:%d",num1-num2);
break;
case 3:printf("Addition:%d",num1*num2);
break;
case 4:printf("Addition:%d",num1/num2);
break;
default:printf("\ninvalid choice");
}
getch();
}
//it call any number of times and any number of arguments.
void fun()
{
printf("hello ");
}
void main()
{
 fun(12);
 fun();
 fun(10,20);
 fun(20,'c');
 getch();
}
//output is great great
void main()
{
 void demo();
 void (*fun)();
 fun=demo;
 (*fun)();
 fun();
 getch();
}
void demo()
{
 printf("Great ");
}
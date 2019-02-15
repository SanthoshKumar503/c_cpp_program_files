int fun(int x)
{
int f;
 if( x>100)
 f=x-10;
 else
 f=fun(fun(x+10));
 return f;
}
void main()
{
int x=95,r;
clrscr();
r=fun(x);
printf("%d",r);
getch();
}
int incr(int i)
{
 static int c=0;
 c+=i;
 return c;
}
void main()
{
 int i,j;
 clrscr();
 for(i=0;i<=4;i++)
 j=incr(i);
 printf("%d",j);
 getch();
}
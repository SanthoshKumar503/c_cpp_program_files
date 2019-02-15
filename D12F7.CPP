// access to static function is restricted to the file where they are created
int sum(int x,int y,int z)
{
 return (x+y+z);
}
void main()
{
 int a=10,b=20,c=30,a1=5,b1=15,c1=25;
 int r;
 r=sum(a,b,c);
  r=sum(a1,b1,c1);
 printf("%d",r);
 getch();
}
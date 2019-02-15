double foo(double);
int main()
{
 double da,db;
 db=foo(da);
 printf("%u",db);
 getch();
 return 0;
}
double foo(double a)
{
 return a;
}
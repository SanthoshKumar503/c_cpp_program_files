//compiler error
//for that weshould declrare fun method here
int fun(int);
void main()
{
 int (*ptr)(int)=fun;
 clrscr();
 (*ptr)(3);
 getch();
}
int fun(int n)
{
for(;n>0;n--)
printf("hello ");
return 0;
}
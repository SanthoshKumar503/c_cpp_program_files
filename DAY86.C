//day8.6.emp id, total sal
void emp(int id,int hours,float sal)
{
 sal=sal*hours;
 printf("Emp id:%d, salary:%0.2f",id,sal);
}
void main()
{
int empid=123,workinghours=92;
float hoursal=200;
emp(empid,workinghours,hoursal);
getch();
}
//day8.4.Days in years, months.
void main()
{
int d=720;
int years=0,months=0;
clrscr();
while(d>=365)
{
  years=d/365;
  d=d%365;
}
while(d<365)
{
months=d/7;
d=d%7;
}
printf("years:%d, Months:%d, days:%d",years,months,d);
getch();
}

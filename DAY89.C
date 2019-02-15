void main()
{
int s=4480;
int hrs=0,mits=0;
clrscr();
while(s>=3600)
{
 s=s-3600;
 hrs++;
}
while(s<3600 && s>=60)
{
s=s-60;
mits++;
}
printf("hours:%d, minits:%d, sec:%d",hrs,mits,s);
getch();
}
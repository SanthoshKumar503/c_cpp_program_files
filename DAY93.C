//day9.3.Finding distnace
void main()
{
int w,c,c1;
int d;
int a,b,a1,b1,aa,bb;
printf("Enter the speed 1, speed 2 in km/hr:");
scanf("%d%d",&a,&b);
printf("\ndelay speed 1 and speed 2 in minutes:");
scanf("%d%d",&a1,&b1);
clrscr();
w=a*b;
aa=w/a;
bb=w/b;
c=(bb-aa)*60;
c1=a1+b1;
d=(c1*w)/c;
printf("Distance is:%d km",d);
getch();
}
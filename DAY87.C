float bikeAvg(int d,float f)
{
 float res=d/f;
 return res;
}
void main()
{
int distance=360;
float fuel=8,r;
clrscr();
r=bikeAvg(distance,fuel);
printf("Average:%f",r);
getch();
}
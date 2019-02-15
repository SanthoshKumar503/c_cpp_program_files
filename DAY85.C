//8.5.average product weight.
float avg(float w,int p)
{
float res=w/p;
return res;
}
void main()
{
float weight=52,purchase=2;
float r=avg(weight,purchase);
printf("average weight:%g",r);
getch();
}
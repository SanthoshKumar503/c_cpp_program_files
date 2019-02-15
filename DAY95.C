//day9.5.find day
void main()
{
  int d,m,a,b,c,d2,s;
  int y,year,y1,y2;
  int mcode[]={0,3,3,6,1,4,6,2,5,0,3,5};
  //int ccode[]={0,6};
  clrscr();
  printf("Enter the day:");
  scanf("%d",&d);
  printf("\nEnter the month:");
  scanf("%d",&m);
  printf("\nEnter the year:");
  scanf("%d",&y);
  year=y;
  year=year/100;
  y1=y%10;
  y=y/10;
  y2=y%10;
  y=(y2*10)+y1;
  a=d+y;
  b=y/4;
  c=mcode[--m];
  if(year==19)
  {
  d2=0;
  }else
  {
  d2=6;
  }
  s=(a+b+c+d2)%7;
  switch(s)
  {
  case 0:printf("Sunday");
  break;
  case 1:printf("Monday");
  break;
  case 2:printf("Tuesday");
  break;
  case 3:printf("Wednesday");
  break;
  case 4:printf("Thursday");
  break;
  case 5:printf("Friday");
  break;
  case 6:printf("Saturday");
  break;
  default:printf("\n");
  }
  getch();
}
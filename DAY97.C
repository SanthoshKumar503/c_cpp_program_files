//day9.7. user data
void main()
{
int cid;
char cname[10];
int uc;
float ch,a=0,nt,sa=0;
clrscr();
printf("Enter the customer id:");
scanf("%d",&cid);
printf("\nEnter the customer name:");
scanf("%s",&cname);
printf("\nEnter the units consumed:");
scanf("%d",&uc);
  if(uc<=85)
  {

   ch=100;
  }
  else if(uc>85 && uc<=199)
  {
   a=1.20;
   ch=a*uc;
  }
  else if(uc>=200 && uc<400)
  {
    a=1.50;
   ch=a*uc;
  }
  else if(uc>=400 && uc<600)
  {
   a=1.80;
   ch=a*uc;
  }
  else
  {
   a=2.0;
   ch=a*uc;
  }
  if(ch>400)
  sa=0.15*ch;
  nt=ch+sa;
  printf("\n\nCustomer Id:%d\nCustomer name:%s",cid,cname);
  printf("\nunit consumed:%d",uc);
  printf("\nAmount charges @Rs.%g per unit:%g",a,ch);
  printf("\nNet amt paid by the customer:%g",nt);
getch();
}

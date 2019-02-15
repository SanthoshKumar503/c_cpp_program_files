//d10.6. reverse pyramid
void main()
{
 int n,i,j,c,a;
 clrscr();
 printf("Enter the no.of lines:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  for(a=0;a<=i;a++)
  {
  printf(" ");
  }
  for(j=i;j<n;j++)
  {
   printf("* ");
  }
  printf("\n");
 }
 getch();
}
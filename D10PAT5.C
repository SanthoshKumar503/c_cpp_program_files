//d10.5.pyramid
void main()
{
 int n,i,j,a;
 clrscr();
 printf("Enter the no.of lines:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  for(a=1;a<=n-i;a++)
  {
  printf(" ");
  }
  for(j=0;j<=i;j++)
  {
   printf("* ");
  }
  printf("\n");
 }
 getch();
}
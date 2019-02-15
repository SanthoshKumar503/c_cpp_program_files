//d10.7.up and down pyramid
void main()
{
 int n,i,j,s;
 clrscr();
 printf("Enter the number:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
    for(s=0;s<n-i;s++)
    {
      printf(" ");
    }
    for(j=0;j<=i;j++)
    {
      printf("* ");
    }
    printf("\n");
 }
 for(i=0;i<n;i++)
 {
 for(s=0;s<i+2;s++)
 {
  printf(" ");
 }
  for(j=i+1;j<n;j++)
  {
   printf("* ");
  }
  printf("\n");
 }
 getch();
}









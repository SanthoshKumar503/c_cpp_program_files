//day9.9.pascal triangle
void main()
{
 int n,i,j,s;
 clrscr();
 printf("Enter the no.of lines:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 int c=1;
 for(s=0;s<n-i;s++)
 {
 printf(" ");
 }
  for(j=1;j<=i;j++)
  {
    printf("%d ",c);
    c=c*(i-j)/j;
  }
  printf("\n");
 }
 getch();
}

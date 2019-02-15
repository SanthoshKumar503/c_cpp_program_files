//d10.3.reverse right angle triangle
void main()
{
 int n,i,j;
 clrscr();
 printf("Enter the no.of lines:");
 scanf("%d",&n);
 for(i=n;i>0;i--)
 {
   for(j=1;j<=n;j++)
   {
    if(i<=j)
    {
    printf("* ");
    }
    else
    {
    printf("  ");
    }
   }
   printf("\n");
 }
 getch();
}
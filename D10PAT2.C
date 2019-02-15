//d10.2.Right angle triangle
void main()
{
int n,i,j;
clrscr();
printf("Enter the no.of lines:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
   for(j=0;j<=i;j++)
   {
   printf("* ");
   }
   printf("\n");
}
getch();
}
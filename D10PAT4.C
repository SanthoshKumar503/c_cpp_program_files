//d10.4.print f pattern
void main()
{
int n,i,j;
clrscr();
printf("Enter the no.of lines:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
 if(i==0 || i==n/2 || j==0)
 {
 printf("* ");
 }
 }
 printf("\n");
}
getch();
}
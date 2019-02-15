//d10.1.printing sqare using patterns
void main()
{
int n,i,j;
clrscr();
printf("Enter the number of lines:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  {
    printf("* ");
  }
  printf("\n");
}
getch();
}
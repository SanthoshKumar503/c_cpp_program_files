//day10.1. array concept program
void main()
{
 int a[6],b[6],i,j,sum=0,c=0;
 clrscr();
 printf("Enter the array elements:");
 for(i=0;i<6;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("\n Array before sorting:");
 for(i=0;i<6;i++)
 {
 printf("%d ",a[i]);
 }
 for(i=0;i<6;i++)
 {
 sum=sum+a[i];
 }
 printf("\n sum of all elements in array:%d",sum);
 for(j=0;j<6;j++)
 {
  b[j]=a[j];
 }
 printf("\n copying one array to another:");
 for(j=0;j<6;j++)
 {
  printf("%d ",b[j]);
 }
 for(i=0;i<6;i++)
 {
  for(j=i+1;j<6;j++)
  {
   if(a[i]==a[j])
   c++;
  }
 }
 printf("\n duplicate values:%d",c);
 getch();
}

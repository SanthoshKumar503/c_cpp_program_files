//day10.2. find largest and smallest elements in array
void main()
{
 int a[6],i,j,t;
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
  for(j=i+1;j<6;j++)
  {
    if(a[i]>=a[j])
    {
      t=a[i];
      a[i]=a[j];
      a[j]=t;
    }
  }
  }
  printf("\n second largest in the array is:%d",a[4]);
  printf("\n second smallest in the array is:%d",a[1]);
 getch();
 }

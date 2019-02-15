//day10/11. selection sort
void main()
{
 int arr[100],i,j,t,n;
 clrscr();
 printf("\n enter the number of array values:");
 scanf("%d",&n);
 printf("\nEnter the array elements:");
 for(i=0;i<n;i++)
 {
 scanf("%d",&arr[i]);
 }
 printf("\nBefore selection sort:");
 for(i=0;i<n;i++)
 {
 printf("%d ",arr[i]);
 }
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(arr[i]>arr[j])
   {
    t=arr[i];
    arr[i]=arr[j];
    arr[j]=t;
   }
  }
 }
 printf("\n Aftret selection sort:");
 for(j=0;j<n;j++)
 {
 printf("%d ",arr[j]);
 }
 getch();
}
//d11. 2 binary search
void main()
{
 int arr[100],min,max,mid,n,i,f,flag=0;
 clrscr();
 printf("\nEnter the no.of elements in array:");
 scanf("%d",&n);
 printf("\nEnter the array elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("\nEnter the number to be search:");
 scanf("%d",&f);
 min=0;
 max=n-1;
 while(min<=max)
 {
 mid=(min+max)/2;
 if(f==arr[mid])
 {
 flag=1;
 break;
 }
 else if(f<arr[mid])
 {
  max=mid-1;
 }
 else
 {
  min=mid+1;
 }
 }
  if(flag==0)
  printf("\n %d is not found");
  else
  printf("\n %d is found at %d position:%d",f,mid,arr[mid]);
 getch();
}


















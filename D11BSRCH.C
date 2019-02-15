//d11.binary search
void main()
{
 int arr[100],i,n,x,f,l,m,flag=0;
 clrscr();
 printf("\n Enter the no.of elements:");
 scanf("%d",&n);
 printf("\n Enter the array elements:\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",arr[i]);
 }
 printf("\n Enter number to be search:");
 scanf("%d",&x);
 for(i=0;i<n;i++)
 {
 f=0;
 l=n-1;
 if(f<=1)
 {
  m=(f+l)/2;
  if(x==arr[m])
  {
   flag=1;
   if(flag==0)
   {
    printf("\n%d value not found",x);
   }
   else
   {
    printf("\n%d value found at %d position",x,m);
   }
    if(x<arr[m])
    {
     l=m-1;
    }
    else
    {
    f=m+1;
    }
   }
  }
 }
 getch();
 }














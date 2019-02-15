//2 0 4 8 0
void foo(int n,int sum)
{
 int k=0,j=0;
 if(n==0)
 return;
 k=n%10;
 j=n/10;
 sum=sum+k;
 foo(j,sum); //output 2 0 4 8
 printf(" %d ",k);
 //foo(j,sum);  if you decleare here output is 8 4 0 2
}
void main()
{
int a=2048,sum=0;
clrscr();
foo(a,sum);
printf(" %d ",sum);
getch();
}
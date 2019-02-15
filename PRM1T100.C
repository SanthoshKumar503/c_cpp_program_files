//day9 prime numbers from 1-100
void main()
{
int n,i,p,c=0;
clrscr();
printf("Enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 c=0;
 for(p=1;p<=i;p++)
 {
 if(i%p==0){
 c++;
 }
 }
 if(c==2)
 {
 printf("%d,",i);
 }
}
getch();
}
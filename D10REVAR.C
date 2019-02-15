//day 10. reverse array using another array
void main()
{
 char a[10],b[10];
 int n,i,c=0;
 clrscr();
 printf("Enter the string:");
 scanf("%s",a);
 n=strlen(a)-1;
 for(i=n;i>=0;i--)
 {
  b[i]=a[c];
  c++;
 }
 for(i=0;i<=n;i++)
 {
 printf("%c",b[i]);
 }
 getch();
}
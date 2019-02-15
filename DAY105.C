//day10.5 without string methds
void main()
{
 char s[10],s2[5],s3[10],t;
 int i,j,c=0,c2=0;
 clrscr();
 printf("\n Enter the string:");
 scanf("%s",s);
 for(i=0;s[i]!='\0';i++)
 {
  c++;
 }
 printf("\n String length is:%d",c);
 printf("\n\n Enter the another string:");
 scanf("%s",s2);
 //for(i=0;i<s[i]!='\0';i++);
  for(j=0;s2[j]!='\0';j++,c++)
  {
   s[c]=s2[j];
  }
  printf("\n concatination of two strings:%s",s);
  for(i=0;i<s2[i]!='\0';i++)
  {
   s3[i]=s2[i];
  }
  printf("\nString copy without strcpy:");
  for(j=0;j<s3[j]!='\0';j++)
  {
  printf("%c",s3[j]);
  }
  for(i=0;i<s3[i]!='\0';i++)
  {
   if(s3[i]!=s2[i])
   c2++;
  }
  if(c2==0)
  {
  printf("\n s2 and s3 arrays are equal:");
  }
  else
  {
  printf("\n s2 and s3 arrays are not equal");
  }
 getch();
}
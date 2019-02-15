//day9.4.sorting the string.
void main()
{
char str[10];
char t;
int i,j;
clrscr();
printf("Enter the string:");
scanf("%s",str);
for(i=0;i<strlen(str);i++)
{
for(j=i+1;j<strlen(str);j++)
{
if(str[i]>=str[j])
{
  t=str[i];
  str[i]=str[j];
  str[j]=t;
}
}
}
//for(i=0;i<strlen(str);i++)
//{
//printf("%c",str[i]);
//}
printf("%s",str);
getch();
}
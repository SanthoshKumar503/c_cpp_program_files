//d11. print all ascci valus
void main()
{
 int i;
 clrscr();
 for(i=0;i<=255;i++)
 {
  printf("%c:%d ",i,i);
  if(i%10==0)
  {
  printf("\n");
  }
 }
 getch();
}
#include<LIMITS.H>
#include<float.h>
#include<math.h>
#include<stdio.h>
#include<conio.h>
int main()
{
int a=10;
unsigned int b=20;
short int c=-12000;
unsigned short int d=700;
long int e=-76321;
unsigned long int f=802020;
char g='s';
unsigned char h='A';
float i=5654.50;
double j=65656.783;
long double k=2345.326;
//clrscr();
printf("%5d,%u,%5d,%u,%ld,%lu\n",a,b,c,d,e,f);
printf("%c,%c\n",g,h);
printf("%0.1f,%0.3lf,%2.2Lf\n",i,j,k);

/*printf("sizeof all datatypes in bytes:\n int =%d\n unsignedint = %d short int =%d \nunsigned short =%d \n long int=%d \n unsigned long int=%d \n char =%d \n unsign char=%d\n ",sizeof(a),sizeof(b),sizeof(c),sizeof(d),sizeof(e),sizeof(f),sizeof(g),sizeof(h));
printf("\n float =%d \n double =%d long double =%d",sizeof(i),sizeof(j),sizeof(k));
printf("\n\tint bits:%d \t%d",INT_MAX,INT_MIN);
printf("\n\tchar bits:%d\t%d",CHAR_MAX,CHAR_MIN);
printf("\n\tunsign int:%u\n",UINT_MAX); */

printf("Data Type\t\tType Ranges\t\tBytes");
printf("\n");
printf("\nSigned Char\t\t%d to %d\t\t%d",CHAR_MIN,CHAR_MAX,CHAR_BIT);
printf("\nUnsigned Char\t\t    %d\t\t\t%d",UCHAR_MAX,CHAR_BIT);
printf("\nShort signed int\t%d to %d\t\t",SHRT_MIN,SHRT_MAX);
printf("\nUnsign int \t\t %u",UINT_MAX);
printf("\nUnSignedlong\t\t%u",ULONG_MAX);
printf("\nFloat    \t\t %.10e to %.10e\t\t",FLT_MIN,FLT_MAX);
printf("\nDouble  \t\t %g to %g\t\t",DBL_MIN,DBL_MAX);
return 0;//getch();
}

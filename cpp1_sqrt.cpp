#include <iostream> 
#include <cmath> 
#include <iomanip> 
using namespace std; 
int sqrtAuto(double n)
{
	return sqrt(n);
};
int sqrtManual(double num)
{
	double lower_bound=0; 
             double upper_bound=num;
             double temp=0;             
             int nCount = 50;
        while(nCount != 0)
        {
               temp=(lower_bound+upper_bound)/2;
               if(temp*temp==num) 
               {
                    return temp;
               }
               else if(temp*temp > num)
               {
                    upper_bound = temp;
               }
               else
               {
                    lower_bound = temp;
               }
        nCount--;
     }
        return temp;		
};
  
int main() 
{ 
	double res;
    double val1; 
    cout<<"Enter the number:";
    cin>>val1;
    res=sqrtAuto(val1);
    cout<<endl<<"Square root of a number is:"<<res;
    
    double val2; 
    cout<<endl<<"Enter the number:";
    cin>>val2;
    res=sqrtManual(val2);
    cout<<endl<<"Square root of a number is:"<<res;
  
    return (0); 
} 

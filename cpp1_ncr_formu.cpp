#include<iostream>
using namespace std; 
int fact(int n); 
int ncr(int n, int r) 
{ 
    return fact(n) / (fact(r) * fact(n - r)); 
}  
// Returns factorial of n 
int fact(int n) 
{ 
    int res = 1; 
    for (int i = 2; i <= n; i++) 
    {
        res = res * i;
	}
    return res; 
}   
int main() 
{ 
    int n,r;
	cout<<"Enter the n and r values:";
	cin>>n>>r; 
    cout<< ncr(n, r); 
    return 0; 
} 

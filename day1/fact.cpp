#include<iostream>
using namespace std;
 
#define MAX  400
int res[MAX];
int size;
 
int multiply(int x);
 
void factorial(int n)
{
     
    res[0] = 1;
    size = 1;
 
    
    for (int x=2; x<=n; x++)
       multiply(x);

 cout << "Factorial of given number is:\n ";
    for (int i=size-1; i>=0; i--)
        cout << res[i];
        cout<<endl;
   
    
}
 

int multiply(int x)
{
    int c = 0;  
    for (int i=0; i<size; i++)
    {
        int prod = res[i] * x + c;
        res[i] = prod % 10;
        c  = prod/10;   
    }
 
   while (c)
    {
        res[size] = c%10;
        c = c/10;
        size++;
    }


}
 
int main()
{   int a;
     cout<<"Enter the number\n";
     cin>>a;
    factorial(a);
    return 0;
}

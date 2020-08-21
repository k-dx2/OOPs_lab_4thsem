#include<iostream>
#include<iomanip>
using namespace std;

int main(void)

{
int n;
cin>>n;

for(int i=1;i<n;i++)
{  cout<<setw(n-i);
   if(i==1)
   cout<<"1";
   else
   cout<<"1"<<setw(2*(i-1))<<"1";
   cout<<endl; 

        }
return 0;
}

   

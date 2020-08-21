#include<iostream>
#include<iomanip>
using namespace std;

int main(void)

{
int n;
cin>>n;
for(int i=1;i<n;i++)
{ cout<<setw(n-i);
  for(int j=1;j<=i;j++)
    cout<<j%10;
     for(int k=i-1;k>=1;k--)
     cout<<k%10;
   
  cout<<endl;
}
return 0;
}

   

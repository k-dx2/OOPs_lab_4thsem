#include <iostream>
#include <string.h>

using namespace std;

int main(void)
{
    int a[100],b[100];
    int ans[200]={0};  // to assign all the elements of the array to 0
    int i,j,tmp,f=0;
    char s1[101],s2[101];
    cout<<"Enter two numbers\n";
    cin>>s1>>s2;
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    for(i = l1-1,j=0;i>=0;i--,j++)
    {
        a[j] = s1[i]-'0';
    }
    for(i = l2-1,j=0;i>=0;i--,j++)
    {
        b[j] = s2[i]-'0';
    }
    for(i = 0;i < l2;i++)
    {
        for(j = 0;j < l1;j++)
        {
            ans[i+j] += b[i]*a[j];
        }
    }
    for(i = 0;i < l1+l2;i++)
    {
        tmp = ans[i]/10;
        ans[i] = ans[i]%10;
        ans[i+1] = ans[i+1] + tmp;
    }
   for(i = l1+l2; i>= 0;i--)
    {
      if(ans[i]>0)
          f++;
    }
    cout<<"Product : ";
    for(int h=f;h>=0;h--)
    {
        cout<<ans[h];
    }
    cout<<"\n";

    return 0;}

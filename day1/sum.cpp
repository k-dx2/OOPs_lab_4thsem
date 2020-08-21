#include<iostream>
#include<string.h>
using namespace std;
int main(void)
{
	char s1[100],s2[100];
	int sum=0,carry=0,j=0,res[100];
	cout<<"Enter two numbers\n";
	cin>>s1;
  cin>>s2;
	int l1=strlen(s1);
	int l2=strlen(s2);
	for(int i=l1-1;i>=0;i--)
	{
		sum=(int)s1[i]-'0'+(int)s2[i]-'0'+carry;
		if(sum/10!=0)
		{  carry=sum/10;
		   res[j++]=sum%10;

		}
		else
		{   carry=0;
			res[j++]=sum;
		}
		sum=0;

	}
	cout<<"The result is\n";
	for(int k=j-1;k>=0;k--)
	cout<<res[k];
        cout<<"\n";
return 0;

}

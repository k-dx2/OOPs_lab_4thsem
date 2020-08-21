#include<iostream>
using namespace std;

int det(int a[6][6],int n)
{ int res=0,s=1,e,f,b[6][6];

  if(n==1)
  return a[0][0];

  else
 {
   res=0;
   for(int c=0;c<n;c++)
    { e=0,f=0;
       for(int i=0;i<n;i++)
        { for(int j=0;j<n;j++)
    	    {
            b[i][j]=0;

              if(i!=0&&j!=c)
                { b[e][f]=a[i][j];
                  if(e<n-2)
                    e++;
                  else
                   { e=0;
                     f++;
                   }
               }
        }
      }
         res=res+s*a[0][c]*det(b,n-1);
         s=s*-1;

    }
   }
return res;
}



int main(void)
{int n,a[6][6],q;
 cout<<"Enter the order of the matrix:\n";
 cin>>n;
 cout<<"Enter the elements\n";
 for(int i=0;i<n;i++)
 for(int j=0;j<n;j++)
 cin>>a[i][j];

 q=det(a,n);
 cout<<"The result is\n";
 cout<<q<<endl;
 return 0;

  }

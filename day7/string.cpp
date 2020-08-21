#include<iostream>
#include<string.h>

using namespace std;

 class str
 {
   char st[25];

 public:
   str()
   {

   }
   ~str()
   {

   }

   friend istream & operator >>(istream &y,str &b);


   friend ostream & operator <<(ostream &z,str &b);


    str & operator +(str &a)
     {  static str t;
        strcat(st,a.st);
        strcpy(t.st,st);
        return t;
        }

    str & operator -(str &a)
     {
          static str t;
        int n1,n2,k=0;
        n1=strlen(a.st);
        n2=strlen(st);
        for(int i=0;i<n2;i++)
        {  for(int j=0;j<n1;j++)
          { if(st[i]!=a.st[j])
            k++;
            else
             break;

          }
        break;
      }
for(int h=0;h<k+1;h++)
 t.st[h]=st[h];

return t;
}








char operator [](int n)
    {
    return st[n];
    }


};

istream & operator >>(istream &y,str &b)
 {  cout<<"\nEnter the string\n";
    y>>b.st;
    return y;

 }

ostream & operator <<( ostream &z,str &b)
{
  z<<b.st;
  return z;
}


int main(void)
{ int ch;

  str c1,c2,c3;
  cout<<"Enter the two strings \n";
  cin>>c1;
  cin>>c2;
  cout<<"The two strings are\n\n";
  cout<<c1<<endl;
  cout<<c2;
  cout<<"\nEnter your choice\n";
  cout<<"1.Sum\n";
  cout<<"2.Subtraction\n";
  cout<<"3.Index\n";

  cin>>ch;
  if(ch==1)
   {
      c3=c1+c2;
      cout<<c3;
      cout<<endl;
   }
   else if(ch==2)
    {
       c3=c1-c2;
      cout<<c3;
      cout<<endl;

      }

    else if(ch==3)
    { int g;

      cout<<"Enter the index\n";
      cin>>g;
      cout<<c1[g]<<endl;


    }
    else
    cout<<"wrong choice\n";
    return 0;
}

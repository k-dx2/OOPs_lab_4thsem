#include<iostream>
#include "stack_tem.h"

using namespace std;



int main(void)
{ int n,ch;

 cout<<"Enter the number of elements\n";
 cin>>n;
 cout<<"Which class u want\n";
 cout<<"1.int\n2.float\n3.char\n\n";
 cin>>ch;
 if(ch==1)
{     stk<int> s1(n);
      int a;
      cout<<"Enter the elements\n";
      for(int i=0;i<n;i++)
      { cin>>a;
        s1.push(a);
      }
      s1.display();

     int f=s1.pop();
     cout<<"\nThe deleted elements is "<<f<<endl;
     cout<<"\nAfter popping\n";
     s1.display();
 }
 else if(ch==2)
 {    stk<float> s2(n);
      double b;
      cout<<"Enter the elements\n";
      for(int i=0;i<n;i++)
      { cin>>b;
        s2.push(b);
      }
      s2.display();
      float g=s2.pop();
      cout<<"\nThe deleted elements is "<<g<<endl;
      cout<<"\nAfter popping\n";
      s2.display();

  }

else if(ch==3)
{
        stk<char> s3(n);
        char c;
        cout<<"Enter the elements\n";
        for(int i=0;i<n;i++)
        { cin>>c;
          s3.push(c);
        }
        s3.display();
        char h=s3.pop();
        cout<<"\nThe deleted elements is "<<h<<endl;
        cout<<"\nAfter popping\n";
        s3.display();

        }

else
     cout<<"Wrong choice\n";

        return 0;
}

#include<iostream>

using namespace std;

class stack
{  
  
   int s[20];
   int top;

  public:
 stack()
 {
 top=-1;
  }

  void push(int x)
 {   if(top==20)
     cout<<"Overflow\n";
    else 
     {top++;
     s[top]=x;
      
      }
  }
   
  int pop()
  { int d;
    if(top==-1)
    cout<<"Stack is empty\n";
 
    d=s[top];
    top--;
    return d;
  }
 
 void display()
  { cout<<"Stack:";
    for(int i=top;i>=0;i--)
      cout<<s[i]<<" ";
      
    cout<<endl;
     }

  

  };

int main(void)
{ int n,a;
  stack s1;
 cout<<"Enter the number of elements\n";
 cin>>n;
 for(int i=0;i<n;i++)
 { cin>>a;
   s1.push(a);
  }
 s1.display();

int f=s1.pop();
cout<<"\nThe deleted elements is "<<f<<endl;
cout<<"\nAfter popping\n";
s1.display();
 
return 0;
} 






















 


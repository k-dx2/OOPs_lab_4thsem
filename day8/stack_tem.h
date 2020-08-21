#include<iostream>
using namespace std;
template < class T>
class stk
{
    T*s;
    int top;

  public:
 stk(int i=10)
 { s=new T [i];
   top=-1;
  }
 ~stk() {}
 void push(T);
 T pop();
 void display();
};


template<class T> void stk <T> :: push(T x)
 {   if(top==20)
     cout<<"Overflow\n";
    else
     {top++;
     s[top]=x;

      }
  }

template<class T>  T stk <T> :: pop()
  { T d;
    if(top==-1)
    cout<<"Stack is empty\n";

    d=s[top];
    top--;
    return d;
  }

template<class T> void stk<T> ::display()
  { cout<<"Stack: ";
    for(int i=top;i>=0;i--)
      cout<<s[i]<<" ";

    cout<<endl;
     }





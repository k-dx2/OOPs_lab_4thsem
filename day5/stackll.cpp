#include<iostream>


using namespace std;


class stack
{
 
struct node
 {
  int data;
  node*next;
  };
  
 node*top;
  
public:
 stack()
  { top=NULL;
    }  

 
 void push(int x)
 { node *s=new node;
   s->data=x;
   s->next=NULL;
    
   if(top==NULL)
    top=s;
   else
     { s->next=top;
       top=s;
          
     }
     } 
   
  void pop()
  { 
   node* d=top;
   if(top==NULL)
   cout<<"underflow\n";
   else
   {
   cout<<"The deleted data is "<<top->data;
   top=d->next;
   delete d;
   }
   
   }
   
   void display()
   { node*d=top;
    while(d!=NULL)
   {   cout<<d->data<<" ";
      d=d->next;
      }
     }
   
   
  };

int main(void)
{ int n,a,ch;
  stack s1;
 while(1)
 
{
 cout<<"\nMENU\n\n";
 cout<<"1.Push\n";
 cout<<"2.POP\n";
 cout<<"3.Display\n";
 cout<<"4.Exit\n\n";
 cin>>ch;
 
 
 switch(ch)
 {
   case 1:
     
       cout<<"enter the data\n";
       cin>>a;
       s1.push(a);
      
       break;
    case 2:
       
         s1.pop();
       
        break;
    case 3:
      s1.display()     ;
      break;
    case 4:
        return -1 ;
        break;
       
    default: cout<<"Wrong choice\n";
    }
        
 }
return 0;
} 






















 


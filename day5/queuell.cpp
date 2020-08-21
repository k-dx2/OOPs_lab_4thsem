#include<iostream>


using namespace std;


class queue
{
 
struct node
 {
  int data;
  node*next;
  };
  
 node*front;
 node*rear;  
public:
 queue()
  { front=NULL;
    rear=NULL;
    }  

 
 void enqueue(int x)
 { node *s=new node;
   s->data=x;
   s->next=NULL;
    
   if(front==NULL)
    front=rear=s;
   else
     { rear->next=s;
       rear=s;
           
     }


     } 
   
  void dequeue()
  { 
   node* d=front;
   if(front==NULL)
   cout<<"underflow\n";
   else
   {
   cout<<"The deleted data is "<<d->data;
   front=d->next;
   delete d;
   }
   
   }
   
   void display()
   { node*d=front;
    while(d!=NULL)
   {   cout<<d->data<<" ";
      d=d->next;
      }
     }
   
   
  };

int main(void)
{ int n,a,ch;
  queue s1;
 while(1)
 
{
 cout<<"\nMENU\n\n";
 cout<<"1.Enqueue\n";
 cout<<"2.Dequeue\n";
 cout<<"3.Display\n";
 cout<<"4.Exit\n\n";
 cin>>ch;
 
 
 switch(ch)
 {
   case 1:
     
       cout<<"enter the data\n";
       cin>>a;
       s1.enqueue(a);
      
       break;
    case 2:
       
         s1.dequeue();
       
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






















 


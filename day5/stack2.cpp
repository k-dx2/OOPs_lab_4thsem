#include<iostream>


using namespace std;


class stack
{
 public:
struct node
 {
  int data;
  node*next;
  };
  
 node*top;
  

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
   cout<<"\nThe deleted data is "<<top->data;
   top=d->next;
   delete d;
   }
   
   }
   
 void func(int w)
  {        node*p=top;
           int flag=0;
                
	        while(p!=NULL)
  		  { if(p->data!=w)
    			{  p=p->next;
     			    flag++;
                 		}
                     else
                          break;

  		   }

		if(p==NULL)	
  		 {
		   cout<<"Not found\n";
  		}
		else
  		{
		    while(flag!=0)
     			{ pop();
      			  flag--;
       			}
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
{ int n,a,ch,w;
  stack s1;
  
 while(1)
 
{
 cout<<"\nMENU\n\n";
 cout<<"1.Push\n";
 cout<<"2.Specified task\n";
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
        cout<<"Enter the data\n";
        cin>>w;
        s1.func(w);
  		
       
        break;
    case 3:
         s1.display();
      break;
    case 4:
        return -1 ;
        break;
       
    default: cout<<"Wrong choice\n";
    }
        
 }
return 0;
} 






















 


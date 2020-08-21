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


 void func(int w)
  {        node*temp=front,*prev=NULL;
                           ;
           int flag=0;

	        while(temp!=NULL)
  		  { if(temp->data==w)
			{ break;
                         }

                         prev=temp;
                         temp=temp->next;
                        }
                if(temp==NULL)
              {  cout<<"NOT FOUND\n";

                   }
  		if(prev==NULL)
                 {  node*g=front;
                    front=g->next;
                    delete g;
                     }
                else
                   { prev->next=temp->next;
                     delete temp;
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
{ int n,a,ch,w;
  queue s1;
 while(1)

{
 cout<<"\nMENU\n\n";
 cout<<"1.Enqueue\n";
 cout<<"2.Specified Task\n";
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
         cout<<"Enter the data\n";
         cin>>w;
         s1.func(w);

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

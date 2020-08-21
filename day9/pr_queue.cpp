#include<iostream>

using namespace std;


class que
{

public:

 int *q;
 int front;
 int rear;

 que()
  { front=-1;
    rear=-1;
    q=new int[10];
    }

~que()
{

}
void enqueue(int x)
{
  if(front==-1&&rear==-1)
   {
     front++;
     rear++;
     q[rear]=x;
   }
   else if(rear==11)
   cout<<"overflow\n";
   else
   {
     rear++;
     q[rear]=x;
   }


}

void deq()
{
  int d=q[front];
  front++;
  cout<<"The deleted element is\n"<<d;

}
   void display()
   {  if(front==-1)
     cout<<"EMPTY\n";
     else
     {
       for(int i=front;i<=rear;i++)
       cout<<q[i]<<" ";
     }


  }
};


class pri_que:public que
{
public:
  int *pri;

  pri_que()
  {
    pri=new int[10];


  }
  ~pri_que()
  {

  }

  void enq(int d,int p)
  {
    if(front==-1&&rear==-1)
    {
      front++;
      rear++;
      q[rear]=d;
      pri[rear]=p;
    }


    else if(rear==11)
    {
      cout<<"Overflow\n";

    }

    else
    {
        int k=rear;
        rear++;
      q[rear]=d;
      pri[rear]=p;


      while(p<pri[k]&&k!=-1)
      {
        int temp=q[k];
        q[k]=q[k+1];
        q[k+1]=temp;
        k--;

      }
    
    }

  }


};



int main(void)
{ int n,a,p,ch;
  pri_que s1;
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
       cout<<"Enter the priority\n";
       cin>>p;
       s1.enq(a,p);

       break;
    case 2:

         s1.deq();

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

#include<iostream>
using namespace std;

template <class T>
 class vct
 {
 	int top;
 	int size;
 	 T *a;

 public:
 	vct()
 	{
 		a=new T[1];
 		top=-1;
 		size=1;
 	}
 	~vct(){}
 	void insert(T x);
 	void deletefrompos(int pos);
 	void display(void);
 };

 template<class T> void vct<T> ::insert(T x)
 {
 	if(top<size-1)
 	{
 		a[++top]=x;
 	}
 	else
 	{
 		T *b;
 		b=new T[2*size];
 		for(int i=0;i<=top;i++)
 		{
 			b[i]=a[i];
 		}
 		delete a;
 		a=b;
 		a[++top]=x;
 	}

 }

 template<class T> void vct<T> ::deletefrompos(int pos)
 {
 	T y=a[pos-1];
 	for(int i=pos;i<=top;i++)
 	{
 		a[i-1]=a[i];
 	}
 	top--;
 }


 template<class T> void vct<T> ::display(void)
 {
 	cout<<"Vector:"<<endl;
    for(int i=0;i<=top;i++)
    {
    	cout<<a[i]<<" ";
    }
    cout<<endl;
 }

 int main(void)
{
  int ch,q,y=1;
 cout<<"Which class u want\n";
 cout<<"1.int\n2.float\n3.char\n\n";
 cin>>ch;
 if(ch==1)
 {    vct<int> s1;
 	while(y==1)
 	{
 		cout<<"Enter choice"<<endl;
 		cout<<"1.Insert"<<endl;
 		cout<<"2.Delete"<<endl;
 		cout<<"3.Display"<<endl;
 		cout<<"4.Exit"<<endl;
 		cin>>q;
 		if(q==1)
 		{
 			int b;
 			cout<<"Enter the element\n";
 			cin>>b;
            s1.insert(b);
        }
       else if(q==2)
       {
       	int pos;
       	cout<<"Enter the position to be deleted"<<endl;
       	cin>>pos;
       	s1.deletefrompos(pos);
       	//cout<<"The deleted element is:"<<res1<<endl;
       }
       else if(q==3)
       {
       	s1.display();
       }
       else
       	y=-1;
   }


  }
 else if(ch==2)
 {    vct<float> s2;
 	while(y==1)
 	{
 		cout<<"Enter choice"<<endl;
 		cout<<"1.Insert"<<endl;
 		cout<<"2.Delete"<<endl;
 		cout<<"3.Display"<<endl;
 		cout<<"4.Exit"<<endl;
 		cin>>q;
 		if(q==1)
 		{
 			double b;
 			cout<<"Enter the element\n";
 			cin>>b;
            s2.insert(b);
        }
       else if(q==2)
       {
       	int pos;
       	cout<<"Enter the position to be deleted"<<endl;
       	cin>>pos;
       	s2.deletefrompos(pos);
       }
       else if(q==3)
       {
       	s2.display();
       }
     else
     	y=-1;
 }

  }

else if(ch==3)
 {
 	vct<char> s3;
 	while(y==1)
 	{
 		cout<<"Enter choice"<<endl;
 		cout<<"1.Insert"<<endl;
 		cout<<"2.Delete"<<endl;
 		cout<<"3.Display"<<endl;
 		cout<<"4.Exit"<<endl;
 		cin>>q;
 		if(q==1)
 		{
 			char b;
 			cout<<"Enter the element\n";
 			cin>>b;
            s3.insert(b);
        }
       else if(q==2)
       {
       	int pos;
       	cout<<"Enter the position to be deleted"<<endl;
       	cin>>pos;
       	s3.deletefrompos(pos);

       }
       else if(q==3)
       {
       	s3.display();
       }
     else
     	y=-1;
 }

  }

else
     cout<<"Wrong choice\n";

        return 0;
}

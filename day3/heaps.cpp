#include<bits/stdc++.h>
using namespace std;
int heap[100];
int c=0;

void display()
{
	if (c==0)
	{
		cout<<"heap is empty :";
	}
	else
	{
		int i;
    cout<<"HEAP :";
		for(i=0;i<c;i++)
		cout<<heap[i]<<" ";
		cout<<endl;
	}
}

void add(int x)
{
  int k=2;
	if(c==0)
	{
		heap[0]=x;
		c=1;
  	display();
	}

	else
	{
		heap[c]=x;
		int i=c;
		int par = floor((c-1)/2);
		while(heap[i]>heap[par] )
		{
			int temp;
			temp = heap[par];
			heap[par] = heap[i];
			heap[i] =temp;
			if(par==0)
				break;

			i=par;
			par = floor((par-1)/2);

		}
		c++;
		      		display();
    	}

}


int del()
{
	if(c==0)
		return -1;
	int del = heap[0];
	int i=0;
	while(i<c)
	{
		int fill=max(heap[2*i+1],heap[2*i+2]);
		heap[i]=fill;
		if(fill==heap[2*i+1])
		{
			i=2*i+1;
		}
		else
		{
			i=2*i+2;
		}
	}
	c--;
	return del;
}

int main()
{
	int  n,x;
	cout<<"enter the number of elements :";
	cin>>n;
	cout<<"Enter the elements :"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		add(x);

	}
	int d=del();
        cout<<"After deletion of "<<d<<" the heap is\n";
        display();

	return 0;
}

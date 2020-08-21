#include<iostream>
int k[2];
using namespace std;

void find(char c1,char c2)
{
	for(char c='A';c<='Z';c=c+1)
	{ for(char d='A';d<='Z';d=d+1)
	  {  if((c1==c)&&(c2==d))
	       {
	       	k[0]=int(c)-65;
	       	k[1]=int(d)-65;
	        }

	}
}
}
struct graph
{
	int v;
	int e;
	};

 void adjmatrix(void)
{   int u,v;
    char c1,c2;
	struct graph*g= new graph;
	if(!g)
	{
		cout<<"MEMORY ERROR\n";

	}
	cout<<"Enter the number of vertices and egdes\n";
    cin>>g->v>>g->e;

   	 int adj[g->v][g->v];

    for(u=0;u<g->v;u++)
	   for(v=0;v<g->v;v++)
   		 adj[u][v]=0;

	  cout<<"Enter the pairs of vertices\n";

    for(int i=0;i<g->e;i++)
    {
	     cin>>c1>>c2;
	      find(c1,c2);
	    adj[k[0]][k[1]]=1;
	    adj[k[1]][k[0]]=1;
	}

  cout<<"\nADJACENCY MATRIX IS:\n$ " ;
	for(int t=0;t<g->v;t++)
   {
		 cout<<char(t+65)<<" ";
	 }
  for(int i=0;i<g->v;i++)
   {
     cout<<"\n";
     cout<<char(i+65)<<" ";
     for(int j=0;j<g->v;j++)
      {
					cout<<adj[i][j]<<" ";
       }
    }

cout<<endl;
}


int main(void)
{
	adjmatrix();
}

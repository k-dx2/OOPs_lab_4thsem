#include<iostream>
using namespace std;
template <class t>

class graph
{ public:
  int e;
  int v;
  t mat[10][10];

  graph(int n=1,int d=1)
  {
    v=n;
    e=d;

  }

  ~graph()
  {

  }

  void addedge(t src,t des);
  void display();
  void makezero();


};

template <class t> void graph<t> :: addedge(t src,t des)
{
  for(int i=0;i<v;i++)
  {
  for(int j=0;j<v;j++)
  {
    mat[src][des]=1;
    mat[des][src]=1;

  }
}
}
template <class t> void graph<t>:: makezero()
{
  for(int i=0;i<v;i++)
  for(int j=0;j<v;j++)
  mat[i][j]=0;
}




template <class t> void graph<t>:: display()
{cout<<"@";
 for(int u=0;u<v;u++)
 cout<<u<<" ";
   for(int i=0;i<v;i++)
  { cout<<endl<<" "<<i<<" ";
    for(int j=0;j<v;j++)
  {cout<<mat[i][j]<< " ";

  }

}
}
int main(void)
{ int a,b,v,e;
  cout<<"Enter the number of vertices and edges\n";
  cin>>v>>e;
  graph<int> g(v,e);
  g.v=v;
  g.e=e;
  g.makezero();
cout<<"Enter the pair of vertices\n";
  for(int i=0;i<g.e;i++)
  { cin>>a>>b;
    g.addedge(a,b);

  }
  g.display();

}

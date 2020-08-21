#include<iostream>
using namespace std;
template <class t>
class set
{
  int n;
  t*s;

public:
  set(int i=10)
  {
    n=i;
    s=new t[i];

  }

 ~set()
 {}
  void uni(set& s);
  void inter(set& s);
  void display();


};

template<class t> set<t> set<t>::uni(set &s)
{

}

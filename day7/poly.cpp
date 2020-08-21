#include<iostream>
using namespace std;


class polynomial
 {
 public:

   int term;
   int *arr;


   polynomial()
   {
     term=1;
     arr= new int[term];

   }
   polynomial(int n)
   {
      term=n;
       arr= new int[n];



   }
  ~polynomial()
  {

  }

friend istream & operator >>( istream &y,polynomial &a);
friend ostream & operator <<( ostream &y,polynomial &a);



 polynomial & operator+( polynomial &a)
  {
    int x;
    if(term>=a.term)
    x=term;
    else
    x=a.term;

  static polynomial p(x);


  for( int i = x-1 ; i>=0; i--)
  p.arr[i] = arr[i] + a.arr[i] ;
  return p;

  }

  polynomial & operator-( polynomial &a)
   {
     int x;
     if(term>=a.term)
     x=term;
     else
     x=a.term;

     static polynomial p(x);

   for( int i = x-1 ; i>=0  ; i--)
   p.arr[i] = arr[i] - a.arr[i] ;
   return p;

   }
 };

 istream & operator >>( istream &y,polynomial &a)
 { int e,c;
   cout<<"Enter the terms\n";
   y>>a.term;
   for(int i=0;i<a.term;i++)
   {
   cout<<"Enter the exponent\n";
   y>>e;
   cout<<"Enter the coefficient\n";
   y>>c;
   a.arr[e-1]=c;
   }
 }

 ostream & operator<<(ostream &z,polynomial &a)
 {
   z<<"The polynomial is\n ";
   for(int i=a.term-1;i>=0;i--)
 { if(i==0)
     {  z<<a.arr[i];
        z<<"x^"<<i;
     }
   else
     {  z<<a.arr[i];
        z<<"x^"<<i<<"+";
     }

 }
}

int  main(void)
 {
   polynomial Pol1;
   polynomial Pol2;
   int z=Pol1.term+Pol2.term;
   polynomial Pol3(z);
   polynomial Pol4(z);
   cout << "\nEnter the parameters of the first polynomial.\n";
   cin>>Pol1;
   cout<<Pol1<<endl;
   cout << "\nEnter the parameters of the second polynomial.\n";
   cin>>Pol2;
   cout<<Pol2<<endl;
   Pol3 = Pol1+Pol2;
   cout << "The sum is: \n";
    cout<<Pol3<<endl;

   Pol4 = Pol1-Pol2;
   cout << "The second polynomial substracted from the first one is: \n";
  cout<<Pol4<<endl;
 }

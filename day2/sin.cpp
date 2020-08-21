#include<iostream>
#include<math.h>
#include<iomanip>
#define _USE_MATH_DEFINES
using namespace std;

int main(void)
{ int ch;
  cout<<"MENU(from 0 to 2pi)\n\n";
  cout<<"1.SIN X\n";
  cout<<"2.COS X\n";
  
  cin>>ch;
  switch(ch)

 {

   case 1:
   
  for(float z=0.0;z<=2*(M_PI);z=z+0.1)
  {  
    if(sin(z)>=0)
       { 
         cout<<setw(70)<<setfill(' ')<<"||";
         cout<<setw(sin(z)*60)<<setfill('-')<<"*";
         cout<<endl;
	}

     else
       {
        cout<<setw(70+60*sin(z)+1)<<setfill(' ')<<"*";  
        cout<<setw(-60*sin(z))<<setfill('-')<<"||";
        cout<<endl;
	}
  }
     

   break;
  
case 2:
  
 
  for(float z=0.0;z<=2*(M_PI);z=z+0.1)
  {  
    if(cos(z)>=0)
       { 
         cout<<setw(70)<<setfill(' ')<<"||";
         cout<<setw(cos(z)*60)<<setfill('-')<<"*";
         cout<<endl;
	}

     else
       {
        cout<<setw(70+60*cos(z)-1)<<setfill(' ')<<"*";  
        cout<<setw(-60*cos(z)+2)<<setfill('-')<<"||";
        cout<<endl;
	}
  }

   break;
default:
 cout<<"Wrong choice!!!";

return 0;}
}        


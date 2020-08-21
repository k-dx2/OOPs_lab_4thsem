#include<iostream>
#include<math.h>
#include<iomanip>
#define _USE_MATH_DEFINES
using namespace std;

int main(void)
{   int c=0,d=0; 
  for(float z=M_PI/2 +0.1;z<=2*(M_PI);z=z+0.1)
  {  
    if(tan(z)>=0)
       { 
         cout<<setw(70)<<setfill(' ')<<"||";
         cout<<setw(tan(z)*60)<<setfill('-')<<"*";
         c++;
         cout<<endl;
         if(c==9)
         break;
        
	} 
             
    
  /* else
      {
         
         cout<<setw(70+tan(z)*60+1)<<setfill(' ')<<"*";
         cout<<setw(-60*tan(z))<<setfill('-')<<"||";
         d++;
         cout<<endl;
         if(d==9)
         break;
        
	} */
   }  

  
return 0;
}        


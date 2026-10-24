#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
   int a,p;
   cin>>a>>p;
   if(a<10){cout<<5;}
   else
   {
      if(a==60){cout<<'0';}
      else
      {
          if(p>=20)
           {
               cout<<40;
           }

        else{cout<<30;}
      }
   }
}

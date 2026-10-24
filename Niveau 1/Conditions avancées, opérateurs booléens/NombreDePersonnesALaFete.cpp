#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
   int n;
   int x,h;
   x=0;
   h=0;
   cin>>n;
   repeat (2*n)
   {
      int a;
      cin>>a;
      if(a>0)
      {
         x=x+1;
         if(x>=h){h=x;}
         else{h=h;}
      }
      else
      {
          x=x-1;
      }
   }
   cout<<h;
}

#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
   int p;
   cin>>p;
   int n;
   cin>>n;
   int a=1;
   int b=0;
   repeat (n)
   {
      int d;
      cin>>d;
      if(d>=p)
      {
         if(d-p<=50)
         {
            b=b+a;
         }
      }
     if(d<p)
     {
         if(p-d<=50)
         {
            b=b+a;
         }
     }
   }
   cout<<b;
}

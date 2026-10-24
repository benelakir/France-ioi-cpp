#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
   int n;
   cin>>n;
   int m=0;
   int d=0;
   repeat (n)
   {
      int a;
      cin>>a;
      if(a>0)
      {
         m=m+a;
      }
      if(a<0)
      {
         d=d+a;
      }
   }
   cout<<m<<endl;
   cout<<d*(-1);
}

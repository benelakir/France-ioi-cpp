#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
   int n;
   cin>>n;
   int y=1;
   int z=0;
   int xmin=1000000;
   repeat (n)
   {
      int x;
      cin>>x;
      if(x<=xmin)
      {
         xmin=x;
         z=y;
      }
      y=y+1;
   }
   cout<<z;
}

#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
   int v=0;
   int L;
   cin>>L;
   int l;
   cin>>l;
   repeat (L-l)
   {
      int x=L*L;
      v=v+x;
      L=L-1;
   }
   cout<<v+l*l;
}

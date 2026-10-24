#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
   int N=8;
   int a=17;
   int x=a*a*a;
   int n=n+x;
   repeat(N)
   {
      a=a-2;
      x=a*a*a;
      n=n+x;
   }
   cout<<n<<endl;
}

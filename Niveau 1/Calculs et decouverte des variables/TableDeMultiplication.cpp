#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;

int main()
{
   int x=0;
   int n=0;
   repeat(20)
   {
    x=x+1;
      repeat(20)
      {
         n=n+x;
         cout<<n<<" ";
      }
        n=0;
      cout<<endl;
   }
}

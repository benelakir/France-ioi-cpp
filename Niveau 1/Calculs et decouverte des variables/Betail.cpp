#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
   int s=0;
   int n;
   repeat (20)
   {
      cin>>n;
      s=s+n;
   }
   cout<<s;
}

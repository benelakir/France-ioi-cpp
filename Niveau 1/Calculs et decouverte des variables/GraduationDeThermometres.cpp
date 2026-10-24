#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
   int max;
   int min;
   cin>>max;
   cin>>min;
   cout<<max<<endl;
   repeat (min-max)
   {
      max=max+1;
      cout<<max<<endl;
   }

}

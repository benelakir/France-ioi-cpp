#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a = 1;
   int b= 1000000;
   int c= 1;
   int d = 1000000;
   repeat (n)
   {
      int x,y;
      cin>>x>>y;
      if(x >=a){a= x;}
      if(x <=b){b = x;}
      if (y >=c){c = y;}
      if (y <= d){d = y;}
   }
   int X= a - b;
   int Y= c - d;
   int p=2*(X+Y);
   cout<<p;
}

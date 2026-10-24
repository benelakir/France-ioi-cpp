#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
  int d,f,n;
  cin>>d>>f>>n;
  int c=0;
  bool x=false;
  repeat (n)
  {
     int a,b;
     cin>>a>>b;
     bool x=((a>f)||(b<d));
     if(!x){c=c+1;}
  }
  cout<<c;
}

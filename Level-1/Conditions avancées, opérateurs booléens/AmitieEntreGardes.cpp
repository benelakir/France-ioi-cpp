#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
   int d,f,a,b;
   cin>>d>>f;
   cin>>a>>b;
   if(((a>=d)&&(a<=f))||((d>=a)&& (((b>=d)&&(b<=f))||(b>=f))))
     cout<<"Amis";
   else
     cout<<"Pas amis";

}

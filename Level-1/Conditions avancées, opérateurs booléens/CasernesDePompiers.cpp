#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
   int n;
   cin>>n;
   int x=0;
   repeat(n)
   {
       int xmin,xmax,ymin,ymax;
       cin>>xmin>>xmax>>ymin>>ymax;
       int xmi,xma,ymi,yma;
       cin>>xmi>>xma>>ymi>>yma;
       if(((xma<=xmin)||(xmi>=xmax))||((ymi>=ymax)||(yma<=ymin)))
       {
         x=x-1;
         cout<<"NON"<<endl;
       }
       else{cout<<"OUI"<<endl;}

   }
}

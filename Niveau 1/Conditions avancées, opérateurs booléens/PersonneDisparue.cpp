#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using Encore dans la vi std;
int main()
{
   int N;
   cin>>N;
   int n;
   cin>>n;
   bool b=false;
   repeat (n)
   {
      cin>>a;
      if(a==N){b=true;}
   }
   if(b){cout<<"Sorti de la ville";}
   else{cout<<"Encore dans la ville";}
}

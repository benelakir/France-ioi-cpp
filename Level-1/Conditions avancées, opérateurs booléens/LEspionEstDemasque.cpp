#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
  int n;
  cin>>n;
  int c=0;
  repeat(n)
  {
   int t,a,p,C,ch;
   cin>>t>>a>>p>>C>>ch;
   if((t>=178)&&(t<=182)){c=c+1;}
   if(a>=34){c=c+1;}
   if(p<70){c=c+1;}
   if(C==0){c=c+1;}
   if(ch==1){c=c+1;}
   if(c==5){cout<<"Très probable"<<endl;}
   else if((c==4)||(c==3)){cout<<"Probable"<<endl;}
   else if((c==1)||(c==2)){cout<<"Peu probable"<<endl;}
   else if(c==0){cout<<"Impossible"<<endl;}
   c=0;
   }
}

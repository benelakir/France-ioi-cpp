#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
   int nbp,nbch,a,b,c;
   cin>>nbp>>nbch;
   int t[nbp];
   for(int i=0;i<nbp;i++){
      cin>>t[i];
   }
   for(int j=0;j<nbch;j++){
      cin>>a;
      cin>>b;
      c=t[a];
      t[a]=t[b];
      t[b]=c;
   }
   for(int h=0;h<nbp;h++){
      cout<<t[h]<<endl;
   }
}

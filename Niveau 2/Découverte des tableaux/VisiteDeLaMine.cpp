#include<iostream>
using namespace std;
int main()
{
   int a,d;
   cin>>a;
   int x[a];
   for(int i=0;i<=a;i++){
      cin>>d;
      if(d==1){x[a-i]=2;}
      if(d==2){x[a-i]=1;}
      if(d==4){x[a-i]=5;}
      if(d==5){x[a-i]=4;}
      if(d==3)x[a-i]=3;
   }
   for(int j=1;j<=a;j++){
   cout<<x[j]<<endl;
   }
}

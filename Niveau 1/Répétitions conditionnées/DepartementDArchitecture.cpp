#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a=0;
   int b=1;
   int h=0;
   while(n>=a+(b*b))
   {
      a=a+(b*b);
      b=b+1;
      h=h+1;
   }
   cout<<h<<endl;
   cout<<a;

}

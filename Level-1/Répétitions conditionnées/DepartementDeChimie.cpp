#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a,b;
   cin>>a>>b;
   int t;
   cin>>t;
   n=n-1;
   while((n>=0)&&((t>=a)&&(t<=b)))
   {
      cout<<"Rien à signaler"<<endl;
      n=n-1;
      cin>>t;
   }
   if((t<a)||(t>b))
   {
   cout<<"Alerte !!";
   }
   cout<<"";
}

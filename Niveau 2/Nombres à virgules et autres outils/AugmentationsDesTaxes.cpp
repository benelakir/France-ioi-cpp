#include<cmath>
#include<iostream>
using namespace std;
int main()
{
   double t,tn,p;
   cin>>t>>tn>>p;
   double a=p/((t/100)+1);
   double b=round((a)*((tn/100)+1)*100);
   cout<<b/100;
}

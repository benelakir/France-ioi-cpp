#include<iostream>
#include<cmath>
using namespace std;
double distance(double x,double y,double a,double b){
   return double (sqrt(pow(a-x,2)+ pow(b-y,2)));
}
int main (){
   double x,y,a,b;
   cin>>x>>y>>a>>b;
   cout<<distance(x,y,a,b);
}

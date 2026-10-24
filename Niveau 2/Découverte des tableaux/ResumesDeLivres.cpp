#include<iostream>
#include<string>
using namespace std;
int main()
{
   int nb,lmax;
   cin>>nb>>lmax;
   cin.ignore();
   string a,b;
    for(int i=0;i<nb;i++){
      getline (cin,b);
      getline (cin,a);
      if((int)(a.length()<lmax)){cout<<b<<endl;}
   }
}

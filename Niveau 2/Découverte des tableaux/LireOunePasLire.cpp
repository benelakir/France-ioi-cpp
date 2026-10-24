#include<iostream>
#include<string>
using namespace std;
int main()
{
   int nb;
   cin>>nb;
   cin.ignore();
   string b="";
   string a;
   for(int i=0;i<nb;i++){
      getline (cin,a);
      if(((int)(a.length()))>((int)(b.length()))){
       cout<<a<<endl;
       b=a;
      }

   }
}

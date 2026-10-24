#include<iostream>
#include<string>
using namespace std;
int main(){
    string a="=";
    int c=0;
    int d;
    string x,y;
    getline(cin,x);
    getline(cin,y);
    if((int)(x.length())<(int)(y.length())){
       d=(int)(x.length());
       a='2';
    }
    else if(((int)(x.length()))>(int)(y.length())){
       d=(int)(y.length());
       a='1';
    }
    else d=(int)(x.length());
    for(int i=0;i<d;i++)
    {
       if(x[i]>y[i]){
          a='2';
          break;
       }
       else if(x[i]<y[i]){
          a='1';
          break;
      }
      else{c=c+1;}
    }
    cout<<a<<endl<<c;
}

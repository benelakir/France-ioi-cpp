#include<iostream>
#include<string>
using namespace std;
int main(){
    char a;
    string c;
    cin>>a;
    int nb;
    int x=0;
    cin>>nb;
    cin.ignore();
    for(int i=1;i<nb+1;i++){
      getline(cin,c);
      for(int j=0;j<(int)(c.length());j++){
         if(c[j]==a){x=x+1;}
      }
    }
    cout<<x;
}

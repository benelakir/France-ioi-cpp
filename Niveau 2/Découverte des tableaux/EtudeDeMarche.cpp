#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int pe,pr;
    cin>>pr>>pe;
    int t[pr]={0};
    for(int i=1;i<=pe;i++){
      int a;
      cin>>a;
      t[a]=t[a]+1;
    }
    for(int j=0;j<pr;j++){
      cout<<t[j]<<endl;
    }

}

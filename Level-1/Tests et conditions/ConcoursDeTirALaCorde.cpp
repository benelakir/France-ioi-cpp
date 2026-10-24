#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)
using namespace std;
int main ()
{
    int n;
    cin >>n;
    int x=0;
    int y=0;
    int a,b;
    repeat (n)
    {
       cin>>a;
       x=a+x;
       cin>>b;
       y=b+y;
    }
    if(x>y)
    {
      cout<< "L'équipe 1 a un avantage"<<endl;
      cout<<"Poids total pour l'équipe 1 : "<< x<<endl;
      cout<<"Poids total pour l'équipe 2 : "<< y<<endl;
    }
    else
    {
      cout<< "L'équipe 2 a un avantage"<<endl;
      cout<<"Poids total pour l'équipe 1 : "<<x<<endl;
      cout<<"Poids total pour l'équipe 2 : "<<y<<endl;
    }
}

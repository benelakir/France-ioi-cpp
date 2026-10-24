#include <iostream>
#include<cmath>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    int n;
    cin>>n;
    double p;
    cin>>p;
    int x=floor((p)*n/100);
    cout<<n+x;

}

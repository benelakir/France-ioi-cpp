#include <iostream>
#include<cmath>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
    double n;
    cin>>n;
    int x=ceil(n/60);
    cout<<x*45;

}

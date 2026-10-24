#include<iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)
using namespace std;
int main ()
{
    int n =1337;
    repeat (12)
    {
      n =n*2;
    }
    cout<<n<<endl;

}

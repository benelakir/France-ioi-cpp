#include <iostream>
using namespace std;
int main()
{
  int nbZones;
  cin >> nbZones;
  cout << ((nbZones % 24) + 24 ) % 24;
}

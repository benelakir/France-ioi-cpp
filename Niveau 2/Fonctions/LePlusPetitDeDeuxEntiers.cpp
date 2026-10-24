#include <iostream>
using namespace std;
int min2(int val1, int val2)
{
   if (val1 < val2)
      return val1;
   return val2;
}
int main()
{
   int valMin;
   cin >> valMin;

   for (int iVal = 1; iVal < 10; iVal = iVal + 1)
   {
      int valeur;
      cin >> valeur;
      valMin = min2(valMin, valeur);
   }
   cout << valMin << endl;
}

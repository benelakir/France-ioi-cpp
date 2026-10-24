#include <iostream>
#include "robot.h"
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
   repeat (9)
   {
      haut ();
   }
   repeat (4)
   {
      droite ();
      repeat (8)
      {
         bas();
      }
      droite();
      repeat (8)
      {
         haut ();
      }
   repeat (9)
   {
      bas();
   }
   repeat (9)
   {
     gauche ();
   }

   }
}

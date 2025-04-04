#include "class.hpp"
int main()
{
  Vecteur a(10);
  Vecteur b = a ;
  a.afficher();

 double s =  a.prod_scl(b);

 cout << s << endl ;
}
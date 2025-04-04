#include "class.hpp"

Vecteur::Vecteur(int n )
{
  v.resize(n);
  for(int i = 0 ; i < n ; i++)
    v[i] = 0.0;

}
Vecteur::Vecteur(int n , double val)
{
  std::cout << "constructeur \n";
  v.resize(n);
  for(int i = 0 ; i < n ; i++)
    v[i]  = val ;
}

Vecteur::Vecteur(const Vecteur& autre) : v(autre.v) {
    std::cout << "Constructeur de recopie appelé.\n";
}
void Vecteur::afficher()
{
  std::cout << "constructeur \n";
  for(double c : v)
    cout << "vecteur :: " << c << endl ;
}

double Vecteur::prod_scl(Vecteur a)
{
  if(v.size() != a.v.size())
    return 0.0 ;
  int size = v.size();
  double produit_scalaire = 0.0 ;

  for(int i = 0 ; i < size ; i++)
  {
    produit_scalaire += a.v[i] * v[i]; 
  }
  return produit_scalaire ;
}

Vecteur::~Vecteur()
{
  std::cout << "Deconstructeur \n";
}
//header file ex1.hpp
#ifndef EX1_HPP
#define EX1_HPP

#include <iostream>
#include <cmath>
class Point
{
  private :
    float x;
    float y;
  public:
    void deplace(float dx, float dy);
    void afficher();
    void homothetie(double ho);
    void rotation(double angle);
    double rho() ;
    double theta();
    void affichePol(); 
};
#endif
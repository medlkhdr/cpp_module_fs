//source code ex1.cpp 
#include "ex1.hpp"
#include <iostream>
using namespace std;
void Point::deplace(float dx , float dy)
{
  x += dx;
  y += dy;
}
void Point::afficher()
{
  std::cout << "point x = " << x << std::endl;
  std::cout << "point y = " << y << std::endl;
}
void Point::homothetie(double ho)
{
  x *= ho;
  y *= ho;
}
double Point::rho()
{
  return sqrt(x * x + y * y);
}

double Point::theta()
{

}
int main()
{
  Point p;
  p.x = 10.2;
  p.y = 10.2;
  p.deplace(10, 20);
  p.afficher();
}
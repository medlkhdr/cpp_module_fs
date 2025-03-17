#include <iostream> 
using namespace std;
namespace entier 
{
	int add(int a , int b )
	{
		return a + b ;
	}
	int sub(int a , int b)
	{
		return a - b ;
	}
}

namespace reel
{
	double  add(double  a , double b )
	{
		return a + b;
	}
	double sub(double  a, double b)
	{
		return a - b ;
	}
}

namespace global
{
	namespace entier=entier;
	namespace reel= reel;
}
int main()
{
	int  a = 5 ;
	int b =  8 ; 
	cout << "Appel de la fonction add de namespace entier pour les deux entier 5 et 8:" << endl ;
	cout << global::entier::add(a, b) << endl ;
	double x = 5.5 ; 
	double y = 8.3 ;
	cout << "Appel de la fonction add de namspace reel pour les deux reels 5.5 et 8.3 :" << endl ;
	cout << global::reel::sub(x ,y) << endl;
	
}

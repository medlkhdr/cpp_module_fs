#include <iostream>
#include <cmath>
using namespace std; 
double fonc(double x , bool &ok)
{
	double y; 
	y = (x- 1 ) * (x - 2); 
	if(x >= 1 && x <= 2)
	{
		ok = true ;
		return sqrt(y);
	}
	ok = false ;
	return 0 ;
}
int main()
{
	while(1)
	{
		double x ;
		bool ok ; 
		cout << "Tapez un double: " ;
		cin >> x ; 
		double y = fonc(x, ok);
		if(!ok)
			cout << "la fonction n'est pas definie au point " << x << endl;
		else
		{
			cout << "la fonction est define au point " << x << endl;
			cout << "f(" << x << ")" << "="  << y << endl;
		}
	}
}

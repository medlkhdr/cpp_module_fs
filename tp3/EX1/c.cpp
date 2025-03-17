#include <iostream>
using namespace std;
using std::string ;
int compteur = 1; 
void appel()
{
	cout << "Appel numero " << compteur <<endl;
	compteur++;
}
int main()
{
	while(1)
	{
		char c ;
		cout << "Pour faire appel a la fonction \"Appel\" , tapez 'o'." << endl << "Sinon,tapez autre chose: ";
		cin >> c; 
		if(c == 'o')
			appel();
		else
			break;
	}
	cout << "Fin du programme" ; 

}

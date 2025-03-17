#include <iostream> 
using namespace std;
using std::string;

int main()
{
	string str  ;
	cout << "Saisir une chaine : " ;
	getline(cin , str);
	char a ;
	cout << "Votre chaine apres traitement :";
	for(auto &c : str)
	{
		if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			a = c+ 1; 
			cout << a ;
			a = 0 ;
		}
	 else
		cout << c ;
	}
	return 0 ;
}

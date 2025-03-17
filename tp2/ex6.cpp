#include <iostream>
using namespace std;
using std::string ;

bool isnotcharspecial(char c)
{
	return ((c >= 'a' && c <= 'z' ) || (c >= 'A' && c <= 'Z' ) || (c >= '0' && c <= '9') || (c == ' ') || (c == '-') || (c == '_') );
}
int main()
{
	string str;
	cout << "Saisir une chaine :" ;
	getline(cin , str);
	cout << "Votre chaine apres exclusion des caracters speciaux :";
	for(auto &c : str)
	{
		if(isnotcharspecial(c))
			cout << c ;
	}
}

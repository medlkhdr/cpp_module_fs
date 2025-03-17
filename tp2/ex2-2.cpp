#include <iostream>
using namespace std ;
using std::string ;
int filtre(string s)
{
    int i = 0 ;
    bool dans = false  ;
    for(auto c : s)
    {
        if(c != ' ')
        {
			if(!dans)
			{
				i++;
				dans = true ;
			}
        }else
			dans = false ;
    }
    return i;
}
int main()
{
    string s  ;
    int i;
    cout << "Saisir une chaine : ";
    getline(cin , s);
    i = filtre(s);
    cout << "Nombre de mots dans votre chaine :" << i << endl; 
}

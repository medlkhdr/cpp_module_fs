#include <iostream>
#include <cctype>
using std::string; 
using namespace std;

int main() {
    string s1;
    cout << "Saisir une chaine : ";
    getline(cin, s1);

    cout << "Votre chaine apres traitement : ";
    for (auto &c : s1)
	{
        if (isalpha(c))
		{
            if (isupper(c))
                c = tolower(c);
            else
                c = toupper(c);
        }
    }
    cout << s1 << endl;
}

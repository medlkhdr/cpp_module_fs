#include <iostream>
using namespace std;

int main()
{
    string s1;
    if (s1.empty())
    {
        cout << "Chaine initialisee par les parametres par defaut" << endl;
        s1 = "Module Programmation C Avancee";
    }
    else
        cout << "Chaine n'est pas vide !!" << endl;

    string s2;
    s2 += s1[0];

    for (size_t i = 1; i < s1.length(); i++)
    {
        if (s1[i] == ' ' && i + 1 < s1.length())
        {
            s2 += s1[i + 1];
        }
    }

    cout << "Initiales : " << s2 << endl;

    size_t f = s1.find("C Avancee");
    if (f != string::npos)
    {
        s1.replace(f,10, "POO C++");
    }
    cout << s1 << endl;

    return 0;
}


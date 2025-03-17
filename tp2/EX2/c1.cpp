#include <iostream>
using std::string ;
using namespace std;
int search(int c)
{
    string set("AOIEYUaoieyu");
    for(auto a:set)
    {
        if(c == a)
            return 1;
    }
    return 0 ;
}
int main()
{
    string s ; 
    cout << "Saisir une chaine : ";
    getline(cin , s);
    int i(0);
    for(auto c : s)
    {
        i += search(c);
    }
    cout << "Nombre de voyelles : " << i << endl;
    return 0; 
}

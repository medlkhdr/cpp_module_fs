#include <iostream> 
using namespace std;
using std::string ;
int main()
{
    string s ;
    cout << "Saisir une chaine :" ;
    getline(cin , s);
    int i = s.length();
    for(;i >= 0; i--)
	{
		cout << s[i];
	}
}

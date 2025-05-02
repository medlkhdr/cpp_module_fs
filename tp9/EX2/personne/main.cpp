
#include <iostream>
#include "Personne.hpp"
using namespace std;

// Fonction pour afficher le nom d'une personne
void afficheNom(const Personne& p) {
    cout << p.nom() << endl;
}

int main() {
    Personne p("Mohamed");
    afficheNom(p);

    return 0;
}

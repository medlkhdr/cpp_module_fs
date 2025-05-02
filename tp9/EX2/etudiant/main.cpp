#include "Etudiant.hpp"

int main() {
    Etudiant e("Ali", "Info");
    e.setEnseignement("C++, POO");

    afficheNom(e);

    return 0;
}

#include "Etudiant.hpp"

Etudiant::Etudiant(const std::string& nom, const std::string& filiere)
    : Personne(nom), _filiere(filiere) {}

std::string Etudiant::filiere() const {
    return _filiere;
}

std::string Etudiant::enseignement() const {
    return _enseignement;
}

void Etudiant::setEnseignement(const std::string& ens) {
    _enseignement = ens;
}

std::string Etudiant::nom() const {
    return "Eleve: " + Personne::nom();
}

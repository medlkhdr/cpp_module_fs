#include "Enseignant.hpp"

Enseignant::Enseignant(const std::string& nom, int service)
    : Personne(nom), _service(service) {}

int Enseignant::nbHeure() const {
    return _service;
}

std::string Enseignant::nom() const {
    return "Enseignant: " + Personne::nom();
}

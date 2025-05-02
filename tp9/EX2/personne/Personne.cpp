
#include "Personne.hpp"

Personne::Personne(const std::string& nom) : _nom(nom) {}

std::string Personne::nom() const
{
    return _nom;
}

#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP

#include "../personne/Personne.hpp"
#include <string>

class Etudiant : public Personne
{
private:
    std::string _filiere;
    std::string _enseignement;

public:
    Etudiant(const std::string& nom, const std::string& filiere);

    std::string filiere() const;
    std::string enseignement() const;
    void setEnseignement(const std::string& ens);

    std::string nom() const ; 
};

#endif 

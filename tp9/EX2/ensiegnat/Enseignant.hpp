#ifndef ENSEIGNANT_HPP
#define ENSEIGNANT_HPP

#include "../personne/Personne.hpp"
#include <string>

class Enseignant : public Personne {
private:
    int _service;

public:
    Enseignant(const std::string& nom, int service);

    int nbHeure() const;
    std::string nom() const override;
};

#endif

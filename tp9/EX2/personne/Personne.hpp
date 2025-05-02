#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include <string>

class Personne {
private:
    std::string _nom;

public:
    Personne(const std::string& nom);
    std::string nom() const;
};

#endif

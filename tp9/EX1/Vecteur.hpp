#ifndef VECTEUR_HPP
#define VECTEUR_HPP

#include <stdexcept>

template <class T>
class Vecteur {
private:
    T* data;
    int taille;

public:
    Vecteur(int n);
    ~Vecteur();
    T& operator[](int index);
    const T& operator[](int index) const;
    int size() const;
};

#endif

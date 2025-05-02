#include "Vecteur.hpp"
#include <stdexcept>
#include<iostream>

template <class T>
Vecteur<T>::Vecteur(int n)
{

    if (n <= 0)
        throw std::invalid_argument("Taille invalide");
    taille = n;
    data = new T[taille];
}

template <class T>
Vecteur<T>::~Vecteur() {
    delete[] data;
}

template <class T>
T& Vecteur<T>::operator[](int index) {
    if (index < 0 || index >= taille)
        throw std::out_of_range("Indice hors limites");
    return data[index];
}

template <class T>
const T& Vecteur<T>::operator[](int index) const {
    if (index < 0 || index >= taille)
        throw std::out_of_range("Indice hors limites");
    return data[index];
}

template <class T>
int Vecteur<T>::size() const {
    return taille;
}

template class Vecteur<int>;

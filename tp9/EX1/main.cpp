#include <iostream>
#include "Vecteur.hpp"
using namespace std;

int main() {
    Vecteur<int> v(3);
    v[0] = 42;
    v[1] = 17;
    v[2] = 8;

    for (int i = 0; i < v.size(); ++i)
        cout << "v[" << i << "] = " << v[i] << endl;

    return 0;
}

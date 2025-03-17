#include <iostream>
using namespace std;

void tr_val(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void tr_ref(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void tr_adds(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int a, b;

    cout << "Saisir l'entier A: ";
    cin >> a;
    cout << "Saisir l'entier B: ";
    cin >> b;
	int tmpa = a ;
	int tmpb = b;
    cout << endl << "====== Avant l'appel de la fonction Echange: ======" << endl;
    cout << "A = " << a << " B = " << b << endl;

    cout << endl <<"****** Transmission par valeur ******" << endl;
    tr_val(a, b);
    cout << "====== Après l'appel de la fonction Echange: ======" << endl;
    cout << "A = " << a << " B = " << b << " (Pas de changement !)" << endl;

    cout << endl << "****** Transmission par référence ******" << endl; 
    tr_ref(a, b);
    cout << "====== Après l'appel de la fonction Echange: ======" << endl;
    cout << "A = " << a << " B = " << b << endl;

   cout <<  endl << "====== Avant l'appel de la fonction Echange: ======" << endl;
    cout << "A = " << a << " B = " << b << endl;


    cout << endl<<"****** Transmission par adresse ******"<< endl;
    tr_adds(&a, &b);
    cout << "====== Après l'appel de la fonction Echange: ======" << endl;
    cout << "A = " << a << " B = " << b << endl;

    return 0;
}


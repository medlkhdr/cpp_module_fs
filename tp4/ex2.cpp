#include <iostream>
#include <array>
using namespace std;

int main() {
  const int taille(10); 
  array<int, taille> arr;
  cout << "Veuillez taper les 10 entiers du tableau:" << endl;
  for (int i(0); i < 10; i++)
    cin >> arr[i];
  cout << "Le contenu du tableau est :" << endl;
  for (int n : arr)
    cout << n << " ";
  int choix;
  cout << endl << "Veuillez taper l'entier a chercher dans le tableau" << endl;
  cin >> choix;
  bool trouve = false;
  for (int i(0); i < taille ;i++) {
    if (choix == arr.at(i)) {
      trouve = true;
      for (int j = i; j < taille; j++) {
        arr[j] = arr[j + 1];
      }
      arr[taille - 1] = 0;
      break ;
    }
  }
  if (trouve) {
    cout << "Le contenu du tableau apres suppression est :" << endl;
    for (int i = 0; i < taille; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
} else {
    cout << choix << " ne figure pas dans le tableau" << endl;
}
}
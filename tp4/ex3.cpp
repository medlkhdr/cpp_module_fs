#include <iostream>
#include <vector>
using namespace std;
int main() {
  const int ligne = 2;
  const int colonne = 4 ;
  vector<vector<double>> v(ligne, vector<double>(colonne));
  for (int i(0); i < ligne; i++) {
    for (int j(0); j < colonne; j++) {
      cout << "vector[" << i << "][" << j << "] = ";
      cin >> v[i][j];
    }
  }
  double ml, mg;
  for (int i(0); i < ligne; i++) {
    for (int j(0); j < colonne; j++) {
      ml += v[i][j];
    }
    mg += ml ;
    ml /= colonne;
    cout <<endl <<  "moyenne des element de ligne " << i + 1 << "est : " << ml << endl;
    ml  = 0;
  }
  mg /= (ligne * colonne);
  cout << endl<<  "moyenne general est :" << mg << endl;
}
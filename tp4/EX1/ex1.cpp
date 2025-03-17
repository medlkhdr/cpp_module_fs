#include <iostream>
#include <list>
#include<unistd.h>
using namespace std;
// simulation
//  int main() {
//    list<int> nlist = {1 ,  2 , 3 ,4 };
//    list<int>::iterator it = nlist.begin();
//    for (; it != nlist.end(); ++it) {
//       std::cout << *it << std::endl ;
//      }
//  }
void menu() {
  cout << "========================================================" << endl;
  cout << "MENU" << endl;
  cout << "========================================================" << endl;
  cout << "1. Taper 1 pour ajouter un entier dans la liste" << endl;
  cout << "2. Taper 2 pour afficher la liste des entiers" << endl;
  cout << "3. Taper 3 pour supprimer le dernier entier de la liste" << endl;
  cout << "4. Taper 4 pour afficher le dernier entier saisi dans la liste"
       << endl;
  cout << "5. Taper 5 pour Quitter" << endl;
  cout << "========================================================" << endl;
}
void afficher(list<int> nlist) {
  list<int>::iterator it = nlist.begin();
  
  cout << "Le contenu de la liste est :"<< endl;
  for (;it != nlist.end() ; ++it)
    cout << *it << "->";
  cout << endl;
}
int main()
{

  list<int> nlist;
  while (1)
  {
    int options ;
    menu();
    cout <<"Veuillez saisir votre choix :" << endl ;
    cin >> options;
    int dr;

    switch (options)
    {
    case 1:
      cout << "Veuillez taper l'entier que vous voulez ajouter" << endl;
      int a;
      cin >> a;
      nlist.push_front(a);
      break;
    case 2:
      afficher(nlist);
      break;
    case 3:
      cout << "Vous avez choisi de supprimer le dernier entier de la liste "
           << endl;
      nlist.pop_back();
      break;
    case 4:
      dr = nlist.back();
      cout << "le dernier element est " << dr;
      break;
    case 5:
      cout << "Fin de Programme" << endl;
      return 0;
    default:
      cout << "ERREUR, le numero saisi ne correspond a aucun choix dans la liste.\nReessayez." << endl;
   }
  }
}
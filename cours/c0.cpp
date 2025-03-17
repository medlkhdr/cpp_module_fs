#include <iostream>
using namespace std;
using std::string;
void f_free(int **t ,int nl , int cl)
{
  for (int i(0); i < nl; i++)
    delete[] t[i];
  delete[] t;
}
void afficher(int **t , int nl , int cl)
{
  for (int i(0); i < nl; i++)
  {
    for (int j(0); j < cl; j++)
    {
      cout << "[" << t[i][j] << "]";
    }
    cout << endl;
  }
}
int main()
{
  int **t;
  int nl;
  int cl;
  nl = 5;
  cl = 5;
  t = new int *[nl];
  for (int i(0); i < nl; i++)
    t[i] = new int[nl];
  for (int i(0); i < nl; i++)
  {
    for(int j(0) ; j < cl ; j++)
    {
      cout << "matric[" << i + 1 << "][" << j + 1 << "] = ";
      cin >> t[i][j];
    }
  }
  afficher(t, nl, cl);
  f_free(t, nl, cl);
}
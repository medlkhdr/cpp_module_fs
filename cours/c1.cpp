#include <iostream>
#include<vector> 
using namespace std;
using std::string; 
int main()
{
  vector<int> a(10 , INT32_MIN);
  for (int i(0); i < 10; i ++)
  {
    cout << a.at(i) << endl;
    // cin >> a.at(i);
  }

  cout << endl << a.back() << "   " << a.front() << endl;
  a.push_back(2000);
  cout << a.back() << "   " << a.front() << endl;
  a.pop_back();
  cout << a.back() << "   " << a.front() << endl;
}

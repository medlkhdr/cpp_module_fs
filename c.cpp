#include <iostream>
using namespace std;
using std::string;
int main()
{
  int *arr = new int[10];
  for (int i(0); i < 10; i++)
  {
    cout << "try to enter a nuber for the index " << i << endl;
    cout << "array[" << i << "]" << " = ";
    cin >> arr[i];
  }
  for (int i(0); i < 10; i++)
    cout << "array[" << i << "]" << " = " << arr[i] << endl;
  delete[] arr;
  return 0;
}
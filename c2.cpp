/*
this is the stl working on it , we gonna see some implemetation about containers,and a lot 
stuff , for this file we gonna see just something like array implementation and vector 
*/

#include <iostream>
#include <array>
#include <vector>
#include <list>
// using namespace std;
using std::array;
using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::string;
using std::vector;
int main()
{
  cout << "**************ARRAYS**************" << endl;
  array<int, 4> nums = {1, 2, 3, 4};
  // for (int i(0); i < 4; i++)
  //   cout << nums[i] << std::endl;
  for (int num:nums)
    cout << num << endl;
  
  cout << "**************VECTOR**************" << endl;
  std::vector<int> nums1(5,20);
  // so we fill the vector with 5 elements (nodes) , every node contains the value 20 ;
  cout << "std::vector<int> nums1(5,20) , is what i did so the content of the vector is 5 element , and full of 20s " << endl;
  for (int num : nums1)
    cout << num << endl;
  cout << "we gonna push_back a 200 in the stack " << endl;
  nums1.push_back(200);
  for (int num : nums1)
    cout << num << endl;
  cout << "and now a little pop at the back of the stack" << endl;
  nums1.pop_back();
  for (int num : nums1)
    cout << num << endl;
  cout << "**************LIST**************" << endl;
  list<int> nums2;
  nums2 = {1, 2, 3, 4};
  cout << "initilasing list with 4 elements > " << endl;
  for (int num : nums2)
    cout << num << endl;
  cout << "utilise les operation push front and back" << endl;
  nums2.push_back(100);
  nums2.push_front(200);
  cout << "add in back 100 , and front 200" << endl;
  for(int num: nums2)
    cout << num << endl;
  cout << "delete with the pop functin the front and back of the list " << endl;
  nums2.pop_back();
  nums2.pop_front();
  for(int num: nums2)
    cout << num << endl;
   
}

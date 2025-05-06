#include <iostream>
#include <unordered_set>
using namespace std;

int countUnique(int arr[], int size)
// function to count the number of unique element in an arry
{
  unordered_set<int> uniqueElement; // use a set to store the element
  for (int i = 0; i < size; i++)
  {
    uniqueElement.insert(arr[i]); // insert each element into the set
  }
  return uniqueElement.size(); // the size of the set is the count of unique element
}

int main()
{
  int arr[] = {
      1,
      2,
      2,
      3,
      3,
      4,
      4,
      5,
      5,
      4,
      3,
      8,
      4,
      9,
      4,
      3,
      2,
      2,
      8,
      9,
      0,
      6,
      5,
      3,
      2,
  }; // example arry
  int size = sizeof(arr) / sizeof(arr[0]);  // calculate the size of an arry
  int uniqueCount = countUnique(arr, size); // call the function
  cout << "The number of unique element is " << uniqueCount << endl;

  return 0;
}
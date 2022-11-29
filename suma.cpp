#include <iostream>
#include <iterator>

int minimun(int arr[], int lenght) {
  int m;
  m = arr[0];
  for (int i = 0; i < lenght; ++i) {
    if (arr[i] < m)
      m = arr[i];
  }
  return m;
}

int main() {

  int arr[] = {1, 2, 3, 2, 1, 12, 12};
  int l = std::size(arr);
  std::cout << "Minimun number of the array is : " << minimun(arr, l) << '\n';
  
  return 0;
}
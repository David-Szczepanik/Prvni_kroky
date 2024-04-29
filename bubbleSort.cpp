//  O(n^2)
//  Ω(n)

#include <iostream>
#include <algorithm>
using std::cout;
using std::endl;

void bsort(int arr[], int size);

int bubbleSort() {
  int arr[8] = {7,2,5,4,1,6,0,3};

  bsort(arr, 8);

  for (int i : arr)
    cout << i << "\n";
  return 0;
}

void bsort(int arr[], int size){
  for (int i = 0; i < size; i++){
    int min = i;
    for (int j = i+1; j < size; j++)
      if (arr[j] < arr[min])
        min = j;
    std::swap(arr[i], arr[min]);
  }
}

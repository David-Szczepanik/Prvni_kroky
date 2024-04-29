//  O(n^2)
//  Ω(n^2)

#include <iostream>
#include <algorithm>
using std::cout;
using std::endl;

void sort(int arr[], int size);

int selectionSort() {
  int arr[8] = {7,2,5,4,1,6,0,3};

  sort(arr, 8);

  for (int i : arr)
    cout << i << "\n";
  return 0;
}

void sort(int arr[], int size){
  for (int i = 0; i < size; i++){
    int min = i;
    for (int j = i+1; j < size; j++)
      if (arr[j] < arr[min])
        min = j;
    std::swap(arr[i], arr[min]);
  }
}
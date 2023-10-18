// Bubble sort in C++

#include <iostream>
using namespace std;

// perform bubble sort
void bubbleSort(int array[], int size) {

  // loop to access each array element
  for (int step = 0; step < size-1; ++step) {
      
    // loop to compare array elements
    for (int i = 0; i < size - step-1; ++i) {

      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[i] > array[i + 1]) {

        // swapping elements if elements
        // are not in the intended order
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

// print the sorted array
void printSort(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}

int main() {
  int data[] = {12 ,5,-3,-4,7,8};
  
  // find array's length
  int size = sizeof(data) / sizeof(data[0]); //determining the array size
  bubbleSort(data, size);
  
  cout << "Sorted Array in Ascending Order:\n";  
  printSort(data, size);
}
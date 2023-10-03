#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
// display an array 
void displayArr(int arr[], int length)
{
  cout<<"The elements in the array are :"<<endl;
  for (int i = 0; i < length; i++)
  {
    printf("%d\n", arr[i]);
  }
}
int main()
{

  cout << "hello\n"
       << endl;
  int arr[] = {2, 3, 4, 5, 6, 7};
  int arr_len = sizeof(arr) / sizeof(arr[0]);
  printf("\n");
  displayArr(arr, arr_len);
}

// #include <stdio.h>
// int main()
// {
//     //Initialize array
//     int arr[] = {1, 2, 3, 4, 5};
//     //Calculate length of array
//     int length = sizeof(arr)/sizeof(arr[0]);

//     printf("Elements of given array: \n");
//     //Loop through the array by incrementing value of i
//     for (int i = 0; i < length; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

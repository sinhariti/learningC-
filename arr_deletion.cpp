#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void displayArr(int arr[], int length)
{
  cout<<"The elements in the array are :"<<endl;
  for (int i = 0; i < length; i++)
  {
    printf("%d\n", arr[i]);
  }
}
void remove_element(int array[], int length, int delete_val)
{
  int checker = 0;
  int index, i;
  // find position
  for (i = 0; i < length; i++)
  {
    if (array[i] == delete_val)
    {
      index = i;
      checker = 1;
    }
  }
  if (checker == 1)
  {
    for (i = index; i < length - 1; i++)
    {
      array[i] = array[i + 1];
    }
    length--;
    displayArr(array,length);
  }
  else
  {
    printf("Sorry, number not found.");
  }
}
int main()
{
  int delete_val;
  int arr[] = {1, 2, 3, 4, 5, 6};
  int length = sizeof(arr) / sizeof(arr[0]);
  cout << "What number you want to delete?" << endl;
  cin >> delete_val;
  remove_element(arr, length, delete_val);

}
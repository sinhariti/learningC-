#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

struct myArray
{
  int total_size;
  int used_size;
  int *ptr;
};

void createArray(struct myArray *a, int uSize, int tSize)
{
  a->used_size = uSize;
  a->total_size = tSize;
  a->ptr = (int *)malloc(tSize * sizeof(int));
  // malloc allotes the size of the array in the memory location
}

void showArray(struct myArray *a)
{
  printf("The array is :\n");
  for (int i = 0; i < (a->used_size); i++)
  {
    printf("%d\n", (a->ptr)[i]);
  }
}

void setValue(struct myArray *a)
{
  int num;
  for (int i = 0; i < a->used_size; i++)
  {
    printf("Enter an element %d:", i);
    scanf("%d", &num);
    (a->ptr)[i] = num;
  }
}

void deleteValueByIndex(struct myArray *a, int indexnum){
  int i;
  int ele= a->ptr[indexnum];
  for(i=indexnum;i<a->used_size-1;i++){
    (a->ptr)[i]=(a->ptr)[i+1];
  }
  a->used_size--;
  cout<<"The updated array is :"<<endl;
  showArray(a);
}
int main()
{

  struct myArray marks;
  createArray(&marks, 5, 10);
  setValue(&marks);
  showArray(&marks);
  deleteValueByIndex(&marks,2);
}
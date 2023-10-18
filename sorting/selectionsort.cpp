#include <iostream>
#include <list>

using namespace std;

void swap(int *a,int *b){
  int temp=*a;
  *a=*b;
  *b=temp;
}

void insertionsort(int array[],int size){
  for (int i=0;i<size-1;i++){
    int mini=i;
    for(int j=i+1;j<size;j++){
      if (array[j]<array[mini]){
        mini=j;
      }
    }
    swap(&array[mini],&array[i]);
  }
}

void printarray(int array[],int size){
  for (int i=0;i<size;i++){
    cout<<array[i]<<" ";
  }
  cout<<endl;
}

int main(){
  int data[]={23,-1,0,14,5,16,4};
  int size=sizeof(data)/sizeof(data[0]);
  insertionsort(data,size);
  printarray(data,size);
}
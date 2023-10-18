#include <iostream>
#include <list>

using namespace std;

void printArray(int array[],int size){
  for(int i=0;i<size;i++){
    cout<<array[i]<<" ";
  }
  cout<<endl;
}

void insertion(int array[],int size){
  for(int i=1;i<size;i++){
    int j=i-1;
    int key=array[i];
    while(key<array[j] && j>=0){
      array[j+1]=array[j];
      --j;
    }
    array[j+1]=key;
  }
}

int main(){
  int data[]={3,2,15,4,1,0,14};
  insertion(data,7);
  printArray(data,7);
}
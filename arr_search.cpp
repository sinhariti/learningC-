#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void search_arr(int array[],int length,int find_val){
  int checker=0;
  int value=0;
  for (int i=0; i<length; i++){
    if(array[i]==find_val){
      checker=1;
      value =i;
      break;
    }
  }
  if(checker==1){
    cout<<"The number is present at index :"<<value<<endl;
  }else{
    printf("Sorry, number not found.");
  }
}
int main(){
  int find_val;
  int arr[]={1,2,3,4,5,6};
  int length= sizeof(arr)/sizeof(arr[0]);
  cout<<"What number you want to search for?"<<endl;
  cin>>find_val;
  search_arr(arr,length,find_val);
}
#include <iostream>
#include <stdio.h>

using namespace std;

class StackNode{
  public:
  int data;
  StackNode* next;
};

StackNode* newNode(int data){
  StackNode* stackNode = new StackNode();
  stackNode->data = data;
  stackNode->next = NULL;
  return stackNode;
}

int isEmpty(StackNode *root){
  return !root;
}

void push(StackNode** root, int new_data){
  StackNode* stackNode = newNode(new_data);
  stackNode->next = newNode(new_data);
  stackNode->next = *root;
  *root = stackNode;
  cout<<new_data<<endl;
}

int pop(StackNode** root){
  if (isEmpty(*root)){
    return -1;
    StackNode* temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);
  }
    return ;
}

int peek(StackNode* root){

}

int main(){
  StackNode* root =NULL;
  cout<<"Stack Push :"<<endl;
  push(&root, 100);
  push(&root, 200);
  push(&root, 300);
  push(&root, 400);

  cout<<"\nTop element is "<<peek(root)<<endl;
  cout<<"\nStack Pop "<<endl;
  while (isEmpty(root)){
    cout<<pop(&root)<<endl;

  }
  cout<<"top element is "<<peek(root)<<endl;
  return 0;
}

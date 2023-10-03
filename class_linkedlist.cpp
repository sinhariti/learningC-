#include <iostream>
#include <stdio.h>

using namespace std;
// //structure of the node
// class Node{
//   public:
//   int data;
//   Node* next;
// };

// void printList(Node* n){
//   //iterate till n reaches NULL
//   while(n !=NULL){
//     //print the data
//     cout<<n->data<<" ";
//     n=n->next;
//   }
// }

// //driver code
// int main(){
//   Node* head =NULL;
//   Node* second =NULL;
//   Node* third=NULL;

//   //allocate three nodes in the heap
//   head = new Node();
//   second = new Node();
//   third = new Node();

//   //assign data in the nodes
//   head->data=2;
//   head->next=second;

//   second->data=4;
//   second->next=third;

//   third->data=6;
//   third->next=NULL;

//   printList(head);
// }

struct ll
{
  int data;
  struct ll *next;
};
struct ll *head = NULL;
struct ll *last = NULL;

void insert(int data_new)
{
  struct ll *newnode = (struct ll *)malloc(sizeof(struct ll));
  newnode->data = data_new;
  if (head == NULL)
  {
    newnode->next = head;
    head=newnode;
    last=head;
    cout<<last->data;
  }else{
    // newnode->next =last;
    // last=newnode;
    // cout<<last->data<<endl;
    last->next=newnode;
    last=newnode;
  }
}
void printll(){
   struct ll *ptr = head;
   if (ptr==NULL){
    return;
   }
   cout<<"The list is: "<<endl;
   while(ptr!=NULL){
    cout<<ptr->data<<endl;
    ptr=ptr->next;
   }
}
int main(){
  struct ll l1;
  insert(3);
  insert(5);
  insert(4);
  printll();
}
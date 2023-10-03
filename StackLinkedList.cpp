//stack linkedlist
#include <iostream>
#include <stdio.h>

using namespace std;

// creating class for NODE.
class Node
{
public:
  int data;
  Node *next_link;
};

// creating a class for stacking.
class Stack
{
private:
  Node *top;

public:
  // stack creation automatically creates an empty stack with top initialised to NULL.
  Stack()
  {
    top = NULL;
  }
  // push values in the stack -
  void push(int new_data)
  {
    // we use Node* here, because we are inside a class, so the "Node" class is the datatype for the pointer new_element.
    Node *new_element = new Node();
    new_element->data = new_data;
    new_element->next_link = top; // the address stored in the "top" is added in the link of the newly added node.
    top = new_element;            // now the "top" element is the newly added element, so its address is stored in the top pointer. Here, the top pointer saves the data and address of the new element in it.
  }
  // pop/ remove the top most element from the stack -
  void pop()
  {
    if (top == NULL)
    {
      printf("Stack Underflow!\n");
      return;
    }
    else
    {
      Node *temp = top;
      printf("The popped value is : ");
      printf("%d\n", top->data);
      top = top->next_link;
      delete temp;
    }
  }
  // peek - displays the topmost element in the stack -
  void peek()
  {
    if (top == NULL)
    {
      printf("Stack Underflow!\n");
      return;
    }
    else
    {
      printf("%d",top->data);
    }
  }
  //displaying all values of the stack 
  void displayStk()
  {
    if (top == NULL)
    {
      printf("Stack Underflow!\n");
      return;
    }
    Node* temp=top;
    cout << "Stack elements are: \n";
    while(temp!=NULL){
      cout << temp->data <<endl;
      temp = temp->next_link; //temp->next_link retreieves and pointer AND the data altogether
    }
    cout << endl;
  }
};
int main()
{
  Stack stk;
  cout << "Input some elements onto the stack (using linked list):\n";
    stk.push(6);
    stk.push(5);
    stk.push(3);
    stk.push(1);  
    stk.displayStk();
    stk.pop();
    stk.displayStk();

  return 0;
}
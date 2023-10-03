//stack array
#include <iostream>
#include <stdio.h>

using namespace std;

#define MAX 5 // max size for the stack

class Stack
{
  int top;

public:
  int myStack[MAX]; // stack array

  Stack() { top = -1; }
  void displayStack();
  bool push(int x);
  int pop();
  bool isEmpty();
};

// defining stack function
bool Stack::push(int item)
{
  if (top >= (MAX - 1))
  {
    printf("Sorry, stackoverflow!\n");
    return false;
  }
  else
  {
    myStack[++top] = item;
    cout << "The item pushed is :"<<item << endl;
    return true;
  }
}

// remove the top element.
int Stack::pop()
{
  if (top <= -1)
  {
    printf("Stack underflow!");
  }
  else
  {
    int item = myStack[top--];
    return item;
  }
}

// check if stack is empty.
bool Stack::isEmpty()
{
  if (top < 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

// display a stack
void Stack::displayStack()
{
  printf("The stack is :\n");
  if (top < 0)
  {
    printf("Stack Underflow!\n");
    return;
  }
  else
  {
    for (int i = top; i >=0; i--)
    {
      printf("%d\n", myStack[i]);
    }
  }
}

int main()
{
  class Stack stalker;
  class Stack stack1;
  stalker.displayStack();
  stalker.push(2);
  stalker.push(4);
  stalker.push(6);
  stalker.push(8);
  stalker.push(10);
  stalker.push(12);
  //stalker.displayStack();
  printf("The pop value is :%d\n",stalker.pop());
  stalker.displayStack();
  stack1.displayStack();
}
//queue array
#include <iostream>
#include <stdio.h>
#define MAX 5 // max size for the queue.
using namespace std;

class Queue
{
private:
  int front;
  int rear;
  int arr[MAX];

public:
  Queue()
  {
    front = -1;
    rear = -1;
  }

  // check is queue is full
  bool isFull()
  {
    return (rear == MAX - 1);
  }
  // check is queue is empty
  bool isEmpty()
  {
    return (rear == -1 && front == -1);
  }
  // enqeue - adding an element at the back of the list.
  void enqueue(int data)
  {
    if (isFull())
    {
      printf("Sorry, the queue is full.\n");
      return;
    }
    if (isEmpty())
    {
      rear = 0;
      front = 0;
    }
    else
    {
      rear++;
    }
    arr[rear] = data;
  }
  void displayqueue()
  {
    if (isEmpty())
    {
      printf("Sorry, the queue is empty.\n");
      return;
    }
    cout << "The queue is :" << endl;
    for (int i = front; i < rear + 1; i++)
    {
      cout << arr[i] << endl;
    }
  }
  // removing the last element from the queue
  void dequeue()
  {
    if (isEmpty())
    {
      printf("Sorry, the queue is empty.\n");
      return;
    }
    if (front==rear){
      front=-1;
      rear=-1;
    }
    else
    {
      front++;
    }
  }
  // see the first element of the list.
  void peek()
  {
    if (isEmpty())
    {
      printf("Sorry, the queue is empty.\n");
      return;
    }
    else
    {
      cout << "First element is : " << arr[rear] << endl;
    }
  }
};

int main()
{
  class Queue q1;
  q1.isEmpty();
  q1.enqueue(4);
  q1.enqueue(3);
  q1.enqueue(2);
  q1.enqueue(7);
  q1.enqueue(6);
  q1.enqueue(8);
  q1.displayqueue();
  q1.dequeue();
  q1.displayqueue();
}

#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct node {
  int data;
  struct node *link;
};

int main(){
  struct node *head =(struct node*) malloc(sizeof(struct node));
  head->data = 23;
  head->link = NULL;

  struct node *current = (struct node*) malloc(sizeof(struct node));
  current->data=40;
  current->link=NULL;
  if (head!=NULL){
    printf("%d\n",current->data);

  }

}


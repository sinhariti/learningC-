#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
// binary sreach tree
struct node
{
  int key;
  struct node *left, *right;
};

// creating a node
struct node *newnode(int item)
{
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
};

// Inorder transversal
void Inorder(struct node *root)
{
  if (root != NULL)
  {
    // traverse left
    Inorder(root->left);
    // traverse root
    cout << root->key << " -> ";

    // traverse right
    Inorder(root->right);
  }
}

// insert a node
struct node *insert(struct node *node, int key)
{
  // Return a new node if the tree is empty
  if (node == NULL)
  {
    return newnode(key);
  }

  // traverse to the right place and insert the node
  if (key < node->key)
  {
    node->left = insert(node->left, key);
  }
  else
  {
    node->right = insert(node->right, key);
  }
  return node;
}

// Find the Inorder sucessor
struct node *minvalue(struct node *node)
{
  struct node *current = node;
  // Find the left most leaf
  while (current && current->left != NULL)
  {
    current = current->left;
  }
  return current;
}

// Deleting a node
struct node *deletenode(struct node *root, int key)
{
  // Return is the tree is empty
  if (root == NULL)
  {
    return root;
  }

  // Find the node to be deleted
  if (key < root->key)
  {
    root->left = deletenode(root->left, key);
  }
  else if (key > root->key)
  {
    root->right = deletenode(root->right, key);
  }
  else
  {
    // If the node is with only one child or no child
    if (root->left == NULL)
    {
      struct node *temp = root->right;
      free(root);
      return temp;
    }
    else if (root->right == NULL)
    {
      struct node *temp = root->left;
      free(root);
      return temp;
    }
    //if root node has two children
    struct node *temp = minvalue(root->right);

    //Place the Inorder successor in the position of the node to be deleted
    root->key = temp->key;
    //Delete the Inorder successor 
    root->right =deletenode(root->right, temp->key);
  }
  return root;
}
//Driver code 
int main(){
  struct node* root =NULL;
  root=insert(root,8);
  root=insert(root,3);
  root=insert(root,1);
  root=insert(root,6);
  root=insert(root,7);
  root=insert(root,10);
  root=insert(root,14);
  root=insert(root,4);
  cout<<endl;
  cout<<"The Inorder traversal :";
  Inorder(root);
  cout<<endl;
  cout<<"\nAfter deleting 10\n";
  root=deletenode(root,10);
  cout<<"Inorder Traversal :";
  Inorder(root);
  cout<<endl;
  cout<<endl;
}

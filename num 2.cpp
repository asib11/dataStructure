#include<iostream>
#include<stdlib.h>

using namespace std;
struct node
{
     char data;
     struct node* left;
     struct node* right;
};

struct node* newnode(char data)
{
     struct node* node = (struct node*)malloc(sizeof(struct node));
     node->data = data;
     node->left = NULL;
     node->right = NULL;

     return(node);
}
void Preorder(struct node* node)
{
     if (node == NULL)
          return;

     cout<<node->data<<' ';
     Preorder(node->left);
     Preorder(node->right);
}
int main()
{
     struct node *root  = newnode('A');
     root->left         = newnode('B');
     root->right        = newnode('C');
     root->left->left   = newnode('D');
     root->left->right  = newnode('E');
     root->right->right = newnode('F');
     cout<<"Preorder tree:"<<endl;
     cout<<root->right->right->data;
     Preorder(root);

return 0;
}

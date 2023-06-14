#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int key;
    struct Node* right;
    struct Node* left;
    int height;

};

int getheight(struct Node* node)
{
    if(node==NULL)
    {
        return 0;
    }
    else
    {
        return node->height;
    }
}
int max(int a,int b)
{
    if(a>b)
    {
        return a;

    }
    else
    {
        return b;
    }
}
struct Node* newnode(int key)
{
    struct Node* node=malloc(sizeof(struct Node));
    node->key=key;
    node->right=NULL;
    node->left=NULL;
    node->height=1;
    return node;
}
struct Node *rightrotate(struct Node* y)
{
    struct Node* x=y->left;
    struct Node* t2=x->right;

    x->right=y;
    y->left=t2;

    y->height=max(getheight(y->left),getheight(y->right)) + 1;
    x->height=max(getheight(y->left),getheight(y->right)) + 1;

    return x;
}
struct Node* leftrotate(struct Node* x)
{
    struct Node* y=x->right;
    struct Node* t2=y->left;

    y->left=x;
    x->right=t2;

    y->height=max(getheight(y->left),getheight(y->right)) + 1;
    x->height=max(getheight(y->left),getheight(y->right)) + 1;

    return y;
}
int getbalence(struct Node* node)
{
    if(node==NULL)
    {
        return 0;
    }
    else
    {
        return getheight(node->left)-getheight(node->right);
    }
}
struct Node* insert(struct Node* node,int key)
{
    if(node==NULL)
    {
        return newnode(key);
    }


    if(key<node->key)
    {
        node->left=insert(node->left,key);
    }
    else if(key>node->key)
    {
        node->right=insert(node->right,key);
    }
    else
    {
        return node;
    }

    int b=getbalence(node);
    if(b>1 &&(key < node->left->key))
    {
        return leftrotate(node);
    }
    if(b<-1 && (key>node->right->key))
    {
        return rightrotate(node);
    }
    if(b>1 && (key > node->left->key))
    {
        node->left=leftrotate(node->left);
        return rightrotate(node);
    }
    if(b<-1 && (key< node->right->key))
    {
        node->right=rightrotate(node->right);
        return leftrotate(node);
    }
    return node;
}
void preorder(struct Node* root)
{
    if(root!=NULL)
    {
        printf("%d\t",root->key);
        preorder(root->left);
        preorder(root->right);
    }
}
int main()
{
    struct Node *root = NULL;
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 25);
    preorder(root);
}

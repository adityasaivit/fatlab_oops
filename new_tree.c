//trees
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* right;
    struct node* left;

};
struct node* create(int d)
{
    struct node* newnode=malloc(sizeof(struct node));
    newnode->data=d;
    newnode->right=NULL;
    newnode->left=NULL;
    return newnode;
}
void preorder(struct node* root)
{
    if(root!=NULL)
    {
        printf("%d->",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(struct node* root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d->",root->data);
        inorder(root->right);
    }
}
void postorder(struct node* root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d->",root->data);
    }
}
int main()
{
    struct node* root=malloc(sizeof(struct node));

    root=create(10);
    
    int n;
    struct node* root1=root;
    for(int i=1;i<=2;i++)
    {
        scanf("%d",&n);
        while(1)
        {
            if(n>root1->data)
            {
                if(root1->right==NULL)
                {
                    root1->right=create(n);
                    break;
                }
                else
                {
                root1=root1->right;
                }
            }
            else
            {
               if(root1->left==NULL)
               {
                root1->left=create(n);
                break;
               }
               else
               {
                root1=root1->left;
               }
            }
        }

    }
    preorder(root);
    printf("\n\n");
    inorder(root1);
    printf("\n\n");
    postorder(root);


}

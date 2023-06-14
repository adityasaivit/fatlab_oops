#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* create(int v)
{
    struct node* newnode=malloc(sizeof(struct node));
    newnode->data=v;
    newnode->next=NULL;
    return newnode;
}
struct node* insert(struct node* N,int v)
{
    struct node* ptr=N;
    struct node* new1=create(v);
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    new1->data=v;
    ptr->next=new1;
    return new1;
}
void display(struct node* N)
{
    while(N!=NULL)
    {
        printf("%d\n",N->data);
        N=N->next;
    }
}
struct node* insertfront(struct node* head,int v)
{
    struct node* new1=create(v);
    new1->next=head;
    //head=new1;
    return new1;

}
void delete(struct node* head)
{
    while(head->next->next!=NULL)
    {
        head=head->next;
    }
    head->next=NULL;
}

int main()
{
    struct node* head1=malloc(sizeof(struct node));
    int n;
    scanf("%d",&n);
    head1=create(n);
    insert(head1,100);
    head1=insertfront(head1,10000);
    display(head1);
    delete(head1);
    printf("\n\n\n");
    display(head1);

}

#include<stdio.h>
struct node{
    int data;
    struct node*next;
};
struct node*head;
void insertAtBegin(int data)
{
    struct node*newnode =(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    if(head==NULL)
    {
        newnode->next=NULL;
        head=newnode;
    }else
    {
        newnode->next=head;
        head=newnode;
    }
    printf("Element insert is: %d\n",newnode->data);
}
void insertAtEnd(int data)
{
    struct node *newnode =(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }else
    {
        struct node *temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
    printf("Element insert is: %d\n",newnode->data);
}
void insertAtPosition(int data)
{
    int pos,i;
    struct node *newnode =(struct node *)malloc(sizeof(struct node));
    struct node*temp=head;
    newnode->data=data;
    printf("Enter the position:");
    scanf("%d",&pos);
    for(i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    printf("Element insert is: %d\n",newnode->data);
}
void insertAfterNode(int data)
{
    int nodeItem,flag=0;
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    struct node*temp=head;
    printf("Enter the node after which new node is inserted: ");
    scanf("%d",&nodeItem);
    while(temp!=NULL)
    {
        if(nodeItem==temp->data)
        {
            flag=1;
            break;
        }
        temp=temp->next;
    }
    if(flag==0)
    {
        printf("Node is not found\n");
    }else
    {
        newnode->next=temp->next;
        temp->next=newnode;
        printf("Node inserted is:%d\n",newnode->data);
    }
}
int deleteAtBegin()
{
    int data;
    struct node*temp=head;
    if(head==NULL)
    {
        printf("Linked list is Empty\n");
        return NULL;
    }else
    {
        head=temp->next;
        data=temp->data;
        free(temp);
        return(data);
    }
}
int deleteAtEnd()
{
    int data;
    struct node*temp=head,*prev;
    while(temp->next=!NULL)
    {
        prev=temp;
        temp=temp->data;
    }
    prev->next=NULL;
    data=temp->data;
    free(temp);
    return data;
}
int deleteAtPosition()
{
    int pos,i,data;
    struct node*temp=head,*prev;
    printf("Enter the position to delete a node:");
    scanf("%d",&pos);
    for(i=1;i<pos-1;i++)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    data=temp->data;
    free(temp);
    return data;
}
void traverse()
{
    struct node*temp=head;
    if (head==NULL)
    {
       printf("Linked list is Empty\n");
       return 0;
    }
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void main()
{
    head=NULL;
    insertAtBegin(10);
    insertAtBegin(15);
    insertAtBegin(20);
    traverse();
    insertAtEnd(25);
    insertAtEnd(30);
    traverse();
    insertAtPosition(35);
    traverse();
    printf("Node deleted is %d\n",deleteAtBegin());
    traverse();
    printf("Node deleted is %d\n",deleteAtEnd());
    traverse();
    printf("Node deleted is %d\n",deleteAtPosition());
    traverse();
    insertAfterNode(40);
    traverse();
}


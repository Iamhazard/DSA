#include<stdio.h>
#define N 4
struct cqueue
{
    int front;
    int rear;
    int arr[N];
}cqq;
void createQueue();
int isEmpty();
int isFull();
void traverse();
void enqueue(int data);
void dequeue();
void main()
{
    createQueue();
    enqueue(5);
    enqueue(9);
    enqueue(14);
    enqueue(22);
    enqueue(29);
    traverse();
    dequeue();
    enqueue(31);
    enqueue(38);
    dequeue();
    enqueue(48);
    traverse();
}
void createQueue()
{
    cqq.front=-1;
    cqq.rear=-1;
    printf("\nInitialization success");

}
int isEmpty()
{
    if(cqq.rear==-1)
        return 1;
    else
        return 0;

}
int isFull()
{
    if((cqq.front==0 && cqq.rear==N-1)||(cqq.front==cqq.rear+1))
        return 1;
    else
        return 0;
}
void enqueue(int data)
{
    if(isFull())
        printf("Queue is Full,Enqueue failed");
    else
    {
        if(cqq.rear==-1)
        {
            ++cqq.rear;
            ++cqq.front;

            cqq.arr[cqq.rear]=data;
            printf("\nEnqueue success:%d",data);
        }
        else
        {
            cqq.rear=(cqq.rear+1)%N;
            cqq.arr[cqq.rear]=data;
            printf("\nEnqueue success:%d",data);

        }
    }
}
void dequeue()
{
    int data;
    if(isEmpty())
        printf("Queue is Empty,Dequeue failed");
    else
    {

        if(cqq.front != cqq.rear)
           {
              data=cqq.arr[cqq.front];
              cqq.front=(cqq.front+1)%N;
              printf("\nDequeue success:%d",data);
           }
           else
           {
               data=cqq.arr[cqq.front];
               cqq.front=-1;
               cqq.rear=-1;
               printf("\nDequeue success:%d",data);
           }
    }
}
void traverse()
{
    int i;
    printf("\n");
    if(cqq.front<=cqq.rear)
    {
        for(i=cqq.front;i<=cqq.rear;i++)
            printf("%d\t",cqq.arr[i]);
    }
    else
    {
        for(i=cqq.front;i<=N-1;i++)
            printf("%d\t",cqq.arr[i]);
        for(i=0;i<=cqq.rear;i++)
        printf("%d\t",cqq.arr[i]);
    }
}




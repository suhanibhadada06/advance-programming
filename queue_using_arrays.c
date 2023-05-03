#include<stdio.h>
int n;
int front=-1;
int rear=-1;
void enqueue(int x,int arr[]);
void dequeue(int arr[]);
void peek(int arr[]);
void display(int arr[]);
int main(){
int ch=1;
printf("enter the size of the array\n");
scanf("%d",&n);
int queue[n];
int x;
do{
    printf("enter your choice....\n 1 for enqueue\n 2 for dequeue\n 3 for peek\n 4 for display\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        enqueue(x,queue);
        break;
        case 2:
        dequeue(queue);
        break;
        case 3:
        peek(queue);
        break;
        case 4:
        display(queue);
        break;
        default:
        printf("enter a valid choice\n");
    }
}while(ch!=0);
return 0;
}
void enqueue(int x,int queue[]){
    // int x;
    printf("enter the element to enter in the queue\n");
    scanf("%d",&x);
    if(rear==n-1){
        printf("queue is empty\n");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=x;
    }
    else{
        rear++;
        queue[rear]=x;
    }
}
void dequeue(int queue[]){
    if(front==-1 && rear==-1){
        printf("queue is empty\n");
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        printf("the deleted element is %d\n",queue[front]);
        front++;
    }
}
void display(int queue[]){
    if(front==-1 && rear==-1){
        printf("queue is empty\n");
    }
    else{
        for(int i=front;i<rear+1;i++){
              printf("the elements present in the queue are %d\n",queue[i]);
        }
    }
}
void peek(int queue[]){
    if(front==-1 && rear==-1){
        printf("queue is empty\n");
    }
    else{
        printf("the element present at the front of the queue is %d\n",queue[front]);
    }
}
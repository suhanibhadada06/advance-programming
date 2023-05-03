#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
struct node *front=0;
struct node *rear=0;
void enqueue(int x){
       struct node *newnode;
       newnode=(struct node *)malloc(sizeof(struct node));
       printf("enter the element you want to push\n");
       scanf("%d",&x);
       newnode->data=x;
       newnode->next=0;
       if(front==0 && rear==0){
        front=rear=newnode;
       }
       else{
        rear->next=newnode;
        rear=newnode;
       }
}
void display(){
    struct node *temp;
    if(front==0 && rear==0){
        -
        printf("queue is empty\n");
    }
    else{
        temp=front;
        while(temp!=0){
            printf("the elements present in the queue are %d\n",temp->data);
            temp=temp->next;
        }
    }
}
void dequeue(){
    struct node *temp;
    temp=front;
    if(front==0 && rear==0){
        printf("queue is empty\n");
    }
    else{
        printf("the dequeue element is %d\n",front->data);
        front=front->next;
        free(temp);
    }
}
void peek(){
    if(front==0 && rear==0){
        printf("queue is empty\n");
    }
    else{
        printf("the element present at the front is %d\n",front->data);
    }
}
int main(){
// enqueue(5);
// enqueue(0);
// enqueue(-1);
// display();
// dequeue();
// peek();
int ch;
int x;
do{
    printf("enter your choice....\n 1 for enqeue \n 2 for deqeue \n 3 for peek \n 4 for display\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        enqueue(x);
        break;
        case 2:
        dequeue();
        break;
        case 3:
        peek();
        break;
        case 4:
        display();
        break;
        default:
        printf("enter valid choice");
    }
}while(ch!=0);
return 0;
}
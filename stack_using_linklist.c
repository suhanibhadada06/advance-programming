#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node * next;
};
struct node * top=0;
void push(int x){
    struct node * newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the element you want to push\n");
    scanf("%d",&x);
    newnode->data=x;
    newnode->next=top;
    top=newnode;
}
void display(){
    struct node * temp;
    temp=top;
    if(top==0){
        printf("stack is empty\n");
    }
    else{
        while(temp!=0){
            printf("the elements present in the stack are %d\n",temp->data);
            temp=temp->next;
        }
    }
}
void peek(){
    if(top==0){
        printf("stack is empty\n");
    }
    else{
        printf("the topmost data in the stack is %d\n",top->data);
    }
}
void pop(){
    struct node *temp;
    printf("hh");
    temp=top;
    if(top==0){
        printf("stack is empty\n");
    }
    else{
        printf("the popped element is %d\n",temp->data);
       top=top->next;
        free(temp);
    }
  
}
int main(){
push(2);
push(3);
push(4);
peek();
pop();
peek();
display();
//used to enter values by the user
int ch;
int x;
do{
    printf("enter your choice....\n 1 for push \n 2 for pop \n 3 for peek \n 4 for display\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        push(x);
        break;
        case 2:
       
        pop();
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
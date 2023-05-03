#include<stdio.h>
#include<stdlib.h>
struct  node
{
   int data;
   struct node * next;
   
};
void linklist_traversal(struct node *ptr){
    while(ptr!=NULL){
        printf("elements of the linklist are : %d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
struct  node * head;
struct node *second;
struct node *third;
struct node *fourth;
head=(struct node *)malloc(sizeof(struct node));
second=(struct node *)malloc(sizeof(struct node));
third=(struct node *)malloc(sizeof(struct node));
fourth=(struct node *)malloc(sizeof(struct node));
head->data=7;
head->next=second;
second->data=11;
second->next=third;
third->data=55;
third->next=fourth;
fourth->data=66;
fourth->next=NULL;
linklist_traversal(head);
return 0;
}

//data entered by the user
#include<stdio.h>
#include<stdlib.h>
int main(){
struct node{
    int data;
    struct node * next;
};
struct node *head,*newnode,*temp;
head=0;
int choice;
int count=1;
while(choice){
newnode=(struct node *)malloc(sizeof(struct node));
printf("enter the data\n");
scanf("%d",&newnode->data);
newnode->next=0;
if(head==0){
    head=temp=newnode;
}
else{
    temp->next=newnode;
    temp=newnode;
}
printf("do you want to continue(0,1)\n");
scanf("%d",&choice);
}
temp=head;
while(temp!=0){
    printf("the elements are : %d\n",temp->data);
    temp=temp->next;
    count++;
}
printf("the number of elements present in the list is %d",count);
return 0;
}
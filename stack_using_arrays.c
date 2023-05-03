#include<stdio.h>
int n;
int top=-1;
void push(int a[]);
void pop(int a[]);
void peek(int a[]);
void display(int a[]);
int main(){
int ch=1;
printf("enter the size of array:");
scanf("%d",&n);
int a[n];
do{
    printf("enter your choice...\n 1 for push\n 2 for pop \n 3 for peek \n 4 for display\n ");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        push(a);
        break;
        case 2:
        pop(a);
        break;
        case 3:
        peek(a);
        break;
        case 4:
        display(a);
        break;
        default:
        printf("enter the valid choice");
        break;
}
}while(ch!=0);
return 0;
}
void push(int a[]){
    int data;
    printf("enter the data to push into the stack\n");
    scanf("%d",&data);
    if(top==n-1){
        printf("overflow\n");
    }
    else{
        top++;
        a[top]=data;
    }
}
void pop(int a[]){
    int data;
    if(top==-1){
        printf("underflow\n");
    }
    else{
       data=a[top];
        top--;
    }
    printf("the poped item is : %d\n",data);
}
void peek(int a[]){
    if(top==-1){
        printf("stack is empty\n");
    }
    else{
        printf("the top most element of the stack is %d\n",a[top]);
    }
}
void display(int a[]){
    for(int i=top;i>=0;i--){
        printf("the elements present in the stack are %d\n",a[i]);
    }
}
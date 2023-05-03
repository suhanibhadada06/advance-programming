#include<stdio.h>
int main(){
int n,i;
int a[100];
int data;
printf("enter the size of the array:\n");
scanf("%d",&n);
printf("enter the elements to the array:\n");
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("enter the element to be searched in the array:\n");
scanf("%d",&data);
for(int i=0;i<n;i++){
    if(a[i]==data){
        printf("data is found in the array at the position:%d",i);
        break;
    }
}
if(i==n){
    printf("element not found\n");
}
return 0;
}
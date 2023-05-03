#include<stdio.h>

int main(){
int flag,temp;
int n;
printf("enter the size of the array\n");
scanf("%d",&n);
int arr[100];
printf("enter the number to the array\n");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n-1;i++){
    flag=0;
    for(int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            flag=1;
        }
    }
if(flag==0){
        break;
}    
}

printf("the elements of the array after applying bubble sort is\n");
for(int i=0;i<n;i++){
    printf("elements are %d\n",arr[i]);
}
return 0;
}
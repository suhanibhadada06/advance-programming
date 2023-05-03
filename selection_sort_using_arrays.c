#include<stdio.h>
int main(){
int n;
int a[100];
printf("enter the size of the array:\n");
scanf("%d",&n);
printf("enter elemnts to the array:\n");
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(int i=0;i<n-1;i++){
    int min=i;

for(int j=i+1;j<n;j++){
    if(a[j]<a[min]){
        min =j;
    }

if(min!=i){
    int temp;
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;
}
}
}
printf("the elements applyping selection sort are\n");
for(int i=0;i<n;i++){
    printf("%d\n",a[i]);
}
return 0;
}
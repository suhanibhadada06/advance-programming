#include<stdio.h>
int main(){
int n;
int a[100];
printf("enter the size of the aaray\n");
scanf("%d",&n);
printf("enter the elements to the array:\n");
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(int i=1;i<n;i++){
    int temp=a[i];
    int j=i-1;
    while(j>=0 && a[j]>temp){
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=temp;
}
printf("the elemts after the insertion sort are :\n");
for(int i=0;i<n;i++){
    printf("%d\n",a[i]);
}
return 0;
}
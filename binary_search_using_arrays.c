#include<stdio.h>
int main(){
int n,i;
int a[100];
int data;
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter elements to the array:\n");
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("enter the element to be searched\n");
scanf("%d",&data);
int l=0;
int r=n-1;
int mid;
while(l<=r)
{

mid=(l+r)/2;
if(data==a[mid]){
        
        break;
    }
else if(data<a[mid]){
        r=mid-1;
    }
else if(data>a[mid]){
        l=mid+1;
    }
else{
return -1;
}
}
printf("index is :%d",mid);
return 0;
}
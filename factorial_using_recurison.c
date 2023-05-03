#include<stdio.h>
int fact(int x);

int main(){
int number;
printf("enter the number you want the factorial of :\n ");
scanf("%d",&number);
printf("the value of %d factorial is : %d",number,fact(number));
return 0;
}
int fact(int x){
    if(x==1 || x==0){
        return 1;
    }
    else{
        return x*fact(x-1);
    }
}
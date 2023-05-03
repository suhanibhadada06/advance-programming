#include<stdio.h>
int fib(int x);
int main(){
int n;
printf("enter the number :\n");
scanf("%d",&n);
printf("the fibonacci series of the %d number is : %d",n,fib(n));
return 0;
}
int fib(int x){
    if(x==1 || x==2){
        return x-1;
    }
    else{
        return fib(x-1) +fib(x-2);
    }
}
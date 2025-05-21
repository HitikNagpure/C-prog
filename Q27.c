#include<stdio.h>
//Write a function to print n terms of the fibonacci sequence.
// 0,1,1,2,3,5,8,13,21,......
// using recursion
 
int fib(int n);
int main(){
    int n;
    scanf("%d", &n);

    printf("fibonachi of %d is %d", n, fib(n));

    return 0;
}

int fib(int n){
    if(n == 0){
        return 0;
    }
    if(n==1){
        return 1; 
    }

    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fibNm1 + fibNm2;
    return fibN;
}
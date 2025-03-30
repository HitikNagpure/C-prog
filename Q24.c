#include<stdio.h>
//Factorial of n.(using recursive function)

int fact(int n);

int main(){
    int n;
    printf("Enter the Number: ");
    scanf("%d", &n);
    printf("The factorial is %d", fact(n));
    return 0;
}

//recursive Function
int fact(int n){
    if(n==1){
        return 1;
    }
    int factNm1=fact(n-1);
    int factN=factNm1*n;
    return factN;
}
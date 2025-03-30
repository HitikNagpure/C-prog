#include<stdio.h>

//Print the factorial of a number...

int main(){
    int n;
    printf("Enter a Number :");
    scanf("%d", &n);

    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("Factorial of %d is ", n);
    printf("%d", fact);

    return 0;
}
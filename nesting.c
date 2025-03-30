#include<stdio.h>
//Nesting is possible in Conditional operators
//nesting means condition under condition;

int main(){
    int number;
    printf("enter a number : ");
    scanf("%d", &number);

    if (number >= 0){
        printf("the Number %d is a Positive number \n", number);
        if (number % 2 == 0){
            printf("%d is an even number\n", number);
        }else{
            printf("%d is an odd Number\n", number);
        }
    }
    else{
        printf("The Number %d is Negative\n");
    }
    return 0;
}
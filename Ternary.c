#include<stdio.h>

// Ternary Operators
// syntax : 
// "Condition" ? "Do Something if True" : "Do Something if False" ;
// This operator is only for one line condition

int main(){
    int age;
    printf("Enter the age : ");
    scanf("%d", &age);

    age>18 ? printf("Adult \n"): printf("Teenager/child \n");
    return 0;
}
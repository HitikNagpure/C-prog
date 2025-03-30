#include<stdio.h>
//Write a program to check the no is divisible by two.
/*
int main(){
    int a;
    printf("Type a number :");
    scanf("%d", &a);
    int b = a %2;
    printf("%d \n", b == 0);
    return 0;

}
*/
//Write a program to check a no is even or odd.

int main(){
    //even -> 1
    //odd -> 0
    int a,b;
    printf("Type a number :");
    scanf("%d", &a);
    printf("%d", a % 2 == 0);
    return 0;
}
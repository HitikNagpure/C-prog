#include<stdio.h>

//check the no. if it is a 2 digit no. or not

int main(){
    int a;
    printf("Type a number : ");
    scanf("%d", &a);
    printf("%d \n", a>9 && a<100);
    return 0;
}
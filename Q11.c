#include<stdio.h>

//print the table of a number input by the user.(n=2)

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    for(int i=1; i<=10; i++ ){
        int mul=n*i;
        printf("%d*",n);printf("%d =",i);printf("%d \n", mul);
    }
    return 0;
}
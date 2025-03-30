#include<stdio.h>

//Print reverse of the table for a number

 int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    for(int i=10; i>=1;i--){
        int mul=n*i;

        printf("%d *", n);
        printf("%d =", i);
        printf("%d \n", mul);
    }
    return 0;
 }
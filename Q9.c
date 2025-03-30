#include<stdio.h>

// Print the number from 0 to n , if n is given by the user(n=4)
// using for and while loop
int main(){
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    for(int i=0;i<=n;i++){
        printf("%d \n", i);

    }


    // int i=0;
    // while(i<=n){
    //     printf("%d \n",i);
    //     i++;
    // }
    return 0;
}
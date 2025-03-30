#include<stdio.h>
// Write a prog. to assign grade

int main(){
    int marks;
    printf("Enter the MARKS : ");
    scanf("%d" ,&marks);

    if(marks < 30){
        printf("C \n");
    }
    else if(marks >=30 && marks < 70){
        printf("B \n");

    }
    else if(marks >=70 && marks <=100){
        printf("A \n");

    }
    else{
        printf("Now a valid input \n");
    }
    return 0;
}
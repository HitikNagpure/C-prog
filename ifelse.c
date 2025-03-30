#include<stdio.h>

int main(){
    int age;
    printf("enter the age : ");
    scanf("%d", &age);

    if(age >= 18){
        printf("Adult \n");
        printf("They can drive \n");
        printf("They can Vote \n");     

    }
    else if(age > 13 && age < 18){
        printf("He/she is a teenager \n");
    }
    else {
        printf("Child \n");
    }

    printf("Thank You");
    return 0;
    
}
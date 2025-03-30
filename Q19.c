#include<stdio.h>

//Write a function that prints Namste if user is Indian & bonjour if the user is french.

void Indian();
void French();
int ch;

int main(){
    printf("Enter a character(i or f) :");
    scanf("%c", &ch);
    if(ch=='i'){
        Indian();
    }
    else if (ch=='f'){
        French();
    }
    else{
        printf("Invalid input");
    }
    return 0;
}

void Indian(){
    printf("Namaste\n");
}

void French(){
    printf("Bonjuor\n");
}
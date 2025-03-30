#include<stdio.h>
/*
Recursiom : When a funcction calls it self, it's called recursion
e.x. Print "HelloWorld" 5 
*/

void printHW(int count);

int main(){
    printHW(5);
    return 0;
}

void printHW(int count){
    if(count == 0){
        return;
    }
    printf("Hello World \n");
    printHW(count - 1);
}

/*Note: thing we can do in loop is also done by recursion and vise versa.
but sometimes it might possible line of coding taken by loop is less than taken by recursion and vise versa*/

//Q23.c
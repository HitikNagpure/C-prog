#include<stdio.h>
//Write a program to check if a student passed or failed.
/*marks > 30 is pass
marks <= 30 is fail
*/
//excicute this problem using all conditional Operators

int main(){
    int marks;
    printf("Enter Marks : ");
    scanf("%d", &marks);
/*  //using Ternary Operator
    marks > 30 ? printf ("Student passed the exam"): printf("Student failed the exam");
    return 0;
*/
/* //using if else
    if(marks > 30){
        printf("Student passed the exam");
    }
    else{
        printf("Student failed the exam");
    }
    */

   
    return 0;
}
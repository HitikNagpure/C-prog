#include<stdio.h>

//Write a function to calculate Percentage of a student from Marks in Science,Math & Sanskrit.

float Percent(int science, int math, int sanskrit);

int main(){
    int science,math,sanskrit;
    printf("Marks in Science: ");
    scanf("%d", &science);
    printf("Marks in Math: ");
    scanf("%d", &math);
    printf("Marks in Sanskrit: ");
    scanf("%d", &sanskrit);
    float percentage = Percent(science, math, sanskrit);
    printf("Percentage is : %.2f%%\n", percentage);
    return 0;
}

float Percent(int science, int math, int sanskrit){
    return ((science + math + sanskrit)/ 3.0);
}
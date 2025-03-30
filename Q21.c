#include<stdio.h>
#include<math.h>

// Use library Functions to calculate square of a number given by user

// Write a function to calculate area of a sqaure, a circle & a rectangle

//  void squre(n);


//Q1
// int main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     printf("%f", pow(n,2)); // n ka power


//     return 0;
// }

// void squre(n){
//     pow(n,2);
// }

//Q2

float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);

int main(){
    float f;
    printf("Enter the Numerber : ");
    scanf("%f", &f);
    if(f==1){
        float side;
        printf("Enter the side: ");
        scanf("%f", &side);
        printf("area is : %f", squareArea(side) );
    }
    else if (f==2){
        float rad;
        printf("enter the Radius: ");
        scanf("%f", &rad);
        printf("Radius is : %f", circleArea(rad));
    }
    else if(f==3){
        float a, b;
        printf("Enter two sides: ");
        scanf("%f", &a);
        scanf("%f", &b);
        printf("Area of Rectangle is: %f", rectangleArea(a, b));
    }
    else{
        printf("Wrong Input");
    }
    return 0;
}

float squareArea(float side){
    return side * side;
}
float circleArea(float rad){
    return rad*rad * 3.14; //(pi*rsqare);
}
float rectangleArea(float a, float b){
    return a*b;
}

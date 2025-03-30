#include <stdio.h>

//Sum of first n natural numbers

int sum(int n);

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("%d", sum(n));
    return 0;
}

//recursive function
int sum(int n){
    if(n ==1){
        return 1;
    }
    int sumNm1= sum(n-1); //sum of 1 to n
    int sumN = sumNm1 + n;
    return sumN;
}
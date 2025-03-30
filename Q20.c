#include<stdio.h>

void table(int n);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    table(n); // n = Argument(Actual parameter)


    return 0;
}

void table(int n){ // n = parameter(formal parameter)
    for(int i=1;i<=10;i++){
        printf("%d \n", i*n);
    }
}
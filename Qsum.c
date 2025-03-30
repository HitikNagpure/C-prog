#include<stdio.h>

// Q. sum of two no. added by user
// Q. Print table of number n(user entered)

int sum(int a, int b);
void printtable(int n); // n can be named as anything

int main(){
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    printtable(n); //here n is argument or actual parameter

    int a,b;
    printf("Enter two values : ");
    scanf("%d", &a);
    scanf("%d", &b);

    int s = sum(a,b);
    printf("sum is %d",s);
    return 0;
}

int sum(int a, int b){
    return a + b;
}

void printtable(int n){ //here n is Parameter/Formal Parameter
    for(int i=1;i<=10;i++){
        printf("%d \n", i*n);
    }

}

//Note : In function, we can have no. of parameter , but it'll return only one value ata time.




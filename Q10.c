#include<stdio.h>

//Print the sum of First n Natural Numbers
//Also, print them in reverse

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int sum=0;
    for(int i=1, j=n; i<=n && j>=1;i++,j--){
        sum=sum+i;
        printf("%d \n", j);
    }
    printf("Sum of first %d " ,n);
    printf("Natural Numbers is %d", sum);

    return 0;
}


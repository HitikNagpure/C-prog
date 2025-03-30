#include<stdio.h>

//keep taking number as input from user until user enters an odd number.


int main(){
    int n;
for(int i=1;1;++i){
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("%d \n",n);
    if(n%2!= 0 ){
        break;
    }
}

    // do{
    //     printf("Enter a number :");
    //     scanf("%d", &n);
    //     printf("%d\n", n);
    //     if(n%2!=0){
    //         break;
    //     }

    // }while(1);    //(1) here it means true
    return 0;
}
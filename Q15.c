#include<stdio.h>

//Print all the odd numbers from 5 to 50...

int main(){

    // for(int i=5;i<=50;i+=2){
    // printf("%d \n", i);
    // }

    // OR

    // for(int i=5;i<=50;i++){
    //     if(i%2!=0){
    //         printf("%d \n",i);
    //     }

    // }

    // OR

    for(int i=5; i<=50;i++){
        if(i%2==0){
            continue;
        }
        printf("%d \n",i);
    }
    
    return 0;
}
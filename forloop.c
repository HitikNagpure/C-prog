#include<stdio.h>
//for loop
/*Syntax : 
for(initialisation; condition; updation){
//do something
}
*/

int main(){
    //iterator ; counter
    // for(int i=0; i<=100;i=i+1){
    //     printf("%d \n", i);
    // }
    // for(int i=10;i>=1;i=i-1){
    //     printf("%d \n",i); 
    // }

//Loop counter can be float or even Character

    for(float i=1.0; i<=5.0;i++){
        printf("%f \n", i);
    }
    
    for(char i='a'; i<='f'; i++){
        printf("%c \n", i);

    }
    return 0;
}
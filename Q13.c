#include<stdio.h>

/*keep taking numbers as input from user until user 
enters a number which is multiple of 7*/

int main(){
    int n;
    for(int i=1;1;i++){
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("%d", n);
    if(n%7!=0){
        break;
        }
    }
    return 0;
}
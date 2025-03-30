#include<stdio.h>

//Write a Prog. to find if a charachter entered by user is upper case or note
int main(){
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z'){ //ch >=96 && ch >= '122' (this is called asic value, i.e asic value of a to z is 96 to 122 )
        printf("The character %c is LOWER CASE", ch);
    } else if (ch >= 'A' && ch <= 'Z' ){//ch >=65 && ch >= '90' (this is called asic value, i.e asic value of A to Z is 65 to 90 )
        printf("The character %c is Upper CASE", ch);
    }
    else{
        printf("Not an Alphabat Char.");
    }
    return 0;
}
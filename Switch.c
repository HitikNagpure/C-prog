#include<stdio.h>

/*Switch(Conditional Operators)
syntax :
switch(number){
case C1: //do something
        break
case C2 ://do Something
        break;
default ://do Something
}
*/

int main(){
    int day; //1-mon; 2-tues; 3-wed.......

    printf("Enter day(1-7) : ");
    scanf("%d", &day);

    switch (day){
        case 1 : printf("monday \n");
                break;
        case 2 : printf("Tuesday \n");
                break;
        case 3 : printf("Wednesday \n");
                break;
        case 4 : printf("thursday \n");
                break;
        case 5 : printf("Friday \n");
                break;
        case 6 : printf("Saturday \n");
                break;
        case 7 : printf("Sunday \n");
                break;
        default : printf("Not a valid day");
    }
    return 0;

}
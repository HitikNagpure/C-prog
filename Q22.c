//Changes to parameters in funcction dont change the values in calling function.
// Because a copy of argument is passed to the funtion

#include<stdio.h>

void calc(float value);

int main(){
    float value = 100.00;//(Argument)
    calc(value);
    printf("Value is : %f \n", value);
    return 0;
}

void calc(float value){//parameter
    value= value+(0.18*value);
    printf("Final Price is : %f \n", value);
}


/*Answer is 118 and 100 its because whatever the changes happen in parameter
it does not reflect in argument*/
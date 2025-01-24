#define rate 9
#define time 1
#define n 3

#include <stdio.h>
int main(){
    float amount=1000;
    printf(" Simple Interest is = %f \n",amount*rate*time/100);
    printf("compount intrest %f \n",amount*(1+(rate/n)*n*time));
    return 0;
}

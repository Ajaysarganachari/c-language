// #include <stdio.h>
// void swap(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
//     printf("inside the function A and B is  %d %d \n",*a,*b);
// }
// int main(){
//     int a=10;
//     int b=20;
//     printf("value of a And B without swapig  %d %d \n",a,b);
//     swap(&a,&b);
//         printf("value of a And B with swapig outside function  %d %d \n",a,b);
// }
#include <stdio.h>
void addition(int *a){
    *a+=5;
    printf("value of a inside the function %d \n",*a);
}
int main(){
    int a=10;  
    printf("value of a without addition %d \n",a);
    addition(&a);
    printf("value of a outside the function %d \n",a);
}

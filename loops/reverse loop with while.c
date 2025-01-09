#include<stdio.h>
int main()
{
    int num=123;
    int total ;
    while(num%10!=0){
    int temp=num;
    total=num%10;
    printf("%d",total);
    temp=temp/10;
    num=temp;
    }
    return 0;
}

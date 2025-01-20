#include<stdio.h>
int areaofcircle(int b,int h);
int main()
{
    int triangle;
    int b=5;
    int h=10;
    int result=areaofcircle(b,h);
    printf("result=%d",result);

}
int areaofcircle(int b,int h){

    return(0.5)*b*h;
}

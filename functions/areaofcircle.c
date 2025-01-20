#include<stdio.h>

int areaofcircle(int r);

int main(){
    int radius=5;
    int result=areaofcircle(radius);
    printf("result=%d",result);
}
int areaofcircle(int r){
    
    return 2*3.14*r;

}

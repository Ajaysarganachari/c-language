#include<stdio.h>
int main()
{
    int size=10;
    int dyn_arr[size];
    for(int i=0;i<size;i++){
    printf("enter value for dyn_arr[]:");
    scanf("%d",&dyn_arr[i]);
    }
    for(int i=0;i<size;i++){
        printf("val in dyn_arr[%d]:%d\n",i,dyn_arr[i]);
    }
    return 0;
}

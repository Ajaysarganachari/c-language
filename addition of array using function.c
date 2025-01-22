#include<stdio.h>

int array(int arr[], int size) {
    int total=0;
    for (int i=0; i < size; i++) {
        total+=arr[i];
    }
    return total;
}
int main()
{
int arr[5]={10,20,30,40,50};
int size=5;

 
    int total = array(arr, size);
    printf("The addition of the function=%d\n",total);

    


    return 0;
}

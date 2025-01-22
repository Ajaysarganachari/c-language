#include<stdio.h>


int Array(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

int main() {
    int arr[5] = {1, 32, 43, 54, 65};  
    int size = 5;  

    
    int total = Array(arr, size);

    
    printf("The sum of the array elements is: %d\n", total);

    return 0;
}

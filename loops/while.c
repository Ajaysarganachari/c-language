#include <stdio.h>

int main() {
    int num, i = 1;

    // Input the number for the multiplication table
    printf("Enter a number for the multiplication table: ");
    scanf("%d", &num);

    // Print the multiplication table using a while loop
    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    return 0;
}

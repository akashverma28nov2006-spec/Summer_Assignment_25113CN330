#include <stdio.h>

int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        n = n & (n - 1); // Clears the lowest set bit
        count++;
    }
    return count;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    printf("Number of set bits (1s): %d\n", countSetBits(num));
    
    return 0;
}
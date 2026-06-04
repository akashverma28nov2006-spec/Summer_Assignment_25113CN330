#include<stdio.h>
//program for fibonacci 
int main() {
    // intialise a=0,b=1 
    int n, a = 0, b = 1, c;

    printf("Enter number of terms: ");
    scanf("%d", &n);
    // use for loop run it to n
    for(int i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
#include <stdio.h>
//program for finding nth fibonacci term
int main() {
    int n, a = 0, b = 1, c;

    printf("Enter n: ");
    scanf("%d", &n);
    // 0 and 1 are fibonacci so first print them
    if(n == 0)
        printf("0");
    else if(n == 1)
        printf("1");
    else {
        for(int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%d", b);
    }

    return 0;
}
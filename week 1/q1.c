#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n % 2 == 0) {
        if (n % 5 == 0) {
            printf("Even, Multiple of 5");
        } else {
            printf("Even, Not Multiple of 5");
        }
    } else {
        if (n % 5 == 0) {
            printf("Odd, Multiple of 5");
        } else {
            printf("Odd, Not Multiple of 5");
        }
    }
}
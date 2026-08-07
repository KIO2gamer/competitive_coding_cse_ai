#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int a, b, temp;

    printf("Enter two numbers (a and b): ");
    scanf("%d %d", &a, &b)

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    printf("Prime numbers between %d and %d are:\n", a, b);

    int found = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("None");
    }
    printf("\n");

    return 0;
}

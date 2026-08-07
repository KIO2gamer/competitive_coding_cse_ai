#include <stdio.h>

int main() {
    int number, terms;

    printf("Enter the number: ");
    scanf("%d", &number);

    printf("Enter no. of terms: ");
    scanf("%d", &terms);

    for (int i = 1; i <= terms; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}

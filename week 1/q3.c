#include <stdio.h>

int main() {
    int ch;
    float f, c;
    printf("1. Fahrenheit to Celsius.");
    printf("2. Celsius to Fahrenheit.");
    printf("Enter your choice (1/2)\n");
    scanf("%d", &ch);

    if (ch == 1) {
        scanf("%d", &f);
        c = (f - 32) * (5/9.0);
        printf("Celsius: %d", c);
    } else if (ch == 2) {
        scanf("%d", &c);
        f = (c * (9/5.0)) + 32;
        printf("Celsius: %d", c);
    }
}

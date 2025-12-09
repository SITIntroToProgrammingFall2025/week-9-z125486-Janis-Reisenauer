#include <stdio.h>

int main() {
    int r, g, b;

    printf("Enter R, G, B value\n");
    scanf("%d", &r);
    scanf("%d", &g);
    scanf("%d", &b);

    printf("The hex code is #%02X%02X%02X\n", r, g, b);
    return 0;
}
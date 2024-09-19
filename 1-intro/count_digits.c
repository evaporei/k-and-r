#include <stdio.h>

int main() {
    int c,
        whitespace = 0,
        other = 0;
    int digits[10];

    for (int i = 0; i < 10; i++)
        digits[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9')
            digits[c - '0'] += 1;
        else if (c == '\n' || c == '\t' || c == ' ')
            whitespace += 1;
        else
            other += 1;
    }

    printf("digits: ");
    for (int i = 0; i < 10; i++)
        printf("%d -> %d, ", i, digits[i]);
    printf("\n");
    printf("whitespace: %d\n", whitespace);
    printf("other: %d\n", other);
    
    return 0;
}

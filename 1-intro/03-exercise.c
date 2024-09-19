#include <stdio.h>

float fahrenheit_to_celsius(float f) {
    return (f - 32) / 1.8f;
    /* return 5 * (f - 32) / 9; */
}

int main() {
    printf("fahrenheit\tcelcius\n");
    for (float f = 0; f <= 300; f += 20) {
        printf("%10.0f\t%7.1f\n", f, fahrenheit_to_celsius(f));
    }
}

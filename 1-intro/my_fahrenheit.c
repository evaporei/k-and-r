#include <stdio.h>

float fahrenheit_to_celsius(float f) {
    return (f - 32) / 1.8f;
    /* return 5 * (f - 32) / 9; */
}

int main() {
    for (float f = 0; f <= 300; f += 20) {
        printf("%3.0f %6.1f\n", f, fahrenheit_to_celsius(f));
    }
}

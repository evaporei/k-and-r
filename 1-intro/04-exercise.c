#include <stdio.h>

float celcius_to_fahrenheit(float c) {
    return c * 1.8f + 32;
}

int main() {
    printf("celcius\tfahrenheit\n");
    for (float c = 0; c <= 300; c += 20) {
        printf("%7.0f\t%10.1f\n", c, celcius_to_fahrenheit(c));
    }
}

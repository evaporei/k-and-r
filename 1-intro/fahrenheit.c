#include <stdio.h>

int main() {
    int lower = 0,
        upper = 300,
        step = 20;

    int fahr = lower,
        celcius;

    while (fahr <= upper) {
        celcius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celcius);
        fahr += step;
    }
}

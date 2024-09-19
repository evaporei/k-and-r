#include <stdio.h>

int main() {
    int c, curr = -1;
    int chars[26];

    for (int i = 0; i < 26; i++)
        chars[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z')
            chars[c - 'a'] += 1;
    }

    for (int i = 0; i < 26; i++) {
        printf("%c: ", i + 'a');
        for (int j = 0; j < chars[i]; j++)
            putchar('#');
        putchar('\n');
    }

    return 0;
}

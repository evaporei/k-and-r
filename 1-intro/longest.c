#include <stdio.h>

#define MAX_LENGTH 1024

int mygetline(char s[], int limit) {
    int c, i = 0;

    while (i < limit - 1 && (c = getchar()) != EOF && c != '\n') {
        s[i] = c;
        i += 1;
    }

    if (s[i] == '\n') {
        s[i] = c;
        i += 1;
    }

    s[i] = '\0';

    return i;
}

void copy(char dst[], char src[]) {
    int i;
    for (i = 0; src[i] != '\0'; i++)
        dst[i] = src[i];
    dst[i] = '\0'; 
}

int main() {
    int length, max;
    length = max = 0;
    char line[MAX_LENGTH], longest[MAX_LENGTH];

    while ((length = mygetline(line, MAX_LENGTH))) {
        if (length > max) {
            max = length;
            copy(longest, line);
        }
    }

    if (max > 0) {
        printf("%s\n", longest);
    }

    return 0;
}

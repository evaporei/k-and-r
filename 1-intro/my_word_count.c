#include <stdio.h>

enum State {
    INSIDE_WORD,
    OUTSIDE_WORD
};

int main() {
    int c,
        lines = 0,
        words = 0,
        chrs = 0;

    enum State state = OUTSIDE_WORD;

    while ((c = getchar()) != EOF) {
        chrs += 1;

        if (c == '\n')
            lines += 1;
        if (c == ' ' || c == '\t' || c == '\n')
            state = OUTSIDE_WORD;
        else if (state == OUTSIDE_WORD) {
            state = INSIDE_WORD;
            words += 1;
        }
    }

    printf("lines: %d\n", lines);
    printf("words: %d\n", words);
    printf("characters: %d\n", chrs);
}

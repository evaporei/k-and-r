#include <stdio.h>

enum State {
    INSIDE_WORD,
    OUTSIDE_WORD
};

int main() {
    int c;

    enum State state = OUTSIDE_WORD;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == INSIDE_WORD)
                putchar('\n');
            state = OUTSIDE_WORD;
        } else {
            if (state == OUTSIDE_WORD)
                state = INSIDE_WORD;
            putchar(c);
        }
    }
}

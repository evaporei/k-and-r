#include <stdio.h>

#define MAX_WORDS 1000

typedef enum State {
    INSIDE_WORD,
    OUTSIDE_WORD
} State;

int main() {
    int c, curr = -1;
    int lengths[MAX_WORDS];

    for (int i = 0; i < MAX_WORDS; i++)
        lengths[i] = 0;

    State state = OUTSIDE_WORD;

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t' || c == ' ') {
            state = OUTSIDE_WORD;
        } else {
            if (state == OUTSIDE_WORD) {
                state = INSIDE_WORD;
                curr += 1;
            }
            lengths[curr] += 1;
        }
    }

    for (int i = 0; i < curr + 1; i++) {
        for (int j = 0; j < lengths[i]; j++)
            printf("#");
        printf("\n");
    }

    return 0;
}

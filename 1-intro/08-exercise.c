#include <stdio.h>

int main() {
    long blanks = 0,
         tabs = 0,
         newlines = 0;
    int c;

    while ((c = getchar()) != EOF)
        if (c == ' ') 
            blanks += 1;
        else if (c == '\n') 
            newlines += 1;
        else if (c == '\t')
            tabs += 1;

    printf("blanks: %ld\n", blanks);
    printf("tabs: %ld\n", tabs);
    printf("newlines: %ld\n", newlines);
    printf("\n");
    printf("whitespace: %ld\n", blanks + tabs + newlines);
}

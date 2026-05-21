#include <stdio.h>

int main(void) {
    int nl, tab, blank, c;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        }
        else if (c == '\t') {
            ++tab;
        }
        else if (c == ' ') {
            ++blank;
        }
    }
    printf("%d blanks, %d tabs, %d newlines\n", blank, tab, nl);
    return 0;
}

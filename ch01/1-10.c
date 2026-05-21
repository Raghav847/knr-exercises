#include <stdio.h>

#define YES 1
#define NO 0

int main(void) {
    int c, cChange;

    while((c = getchar()) != EOF) {
        cChange = NO;
        if (c == '\t') {
            printf("\\t");
            cChange = YES;
        }
        if (c == '\b') {
            printf("\\");
            cChange = YES;
        }
        if (cChange == NO) {
            putchar(c);
        }
    }

    return 0;
}

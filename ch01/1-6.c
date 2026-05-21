/*
 * Exercise 1-6. Verify that the expression getchar ( ) I= EOF is 0 or 1.
 *
 */
#include <stdio.h>

int main(void) {
    printf("%i\n", (getchar()) != EOF);

    return 0;
}

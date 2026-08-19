#include <stdio.h>

#define MAXLINE 1000
#define TABWIDTH 4

int getLine(char s[], int lim)
{
    int i, c;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}

void detab(char in[], char out[])
{
    int i;
    int j;
    int nblanks;

    for (i = j = 0; in[i] != '\0'; ++i) {
        if (in[i] == '\t') {
            nblanks = TABWIDTH - (j % TABWIDTH);
            while (nblanks-- > 0)
                out[j++] = ' ';
        } else
            out[j++] = in[i];
    }
    out[j] = '\0';
}

int main(void)
{
    char in[MAXLINE];
    char out[MAXLINE];

    while (getLine(in, MAXLINE) > 0) {
        detab(in, out);
        printf("%s", out);
    }
    return 0;
}
#include <stdio.h>

#define MAXLEN 1000
#define NCHARS 80

int getLine(char [], int);

int getLine(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    
    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return i;
}

int main(void)
{
    int len;
    char line[MAXLEN];

    while ((len = getLine(line, MAXLEN)) > 0)
        if (len > NCHARS)
            printf("%s", line);
    return 0;
}
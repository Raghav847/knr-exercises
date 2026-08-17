#include <stdio.h>

#define MAXLINE 1000

int getLine(char [], int);
void removeBlanks(char [], int);

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

void removeBlanks(char s[], int len)
{
    int start = 0;
    int end = len - 1;

    while (start < len && (s[start] == ' ' || s[start] == '\t'))
        start++;
    
    while (end >= start && (s[end] == ' ' || s[end] == '\t'))
        end--;
    
    int j = 0;
    for (int i = start; i <= end; i++)
        s[j++] = s[i];
    
    s[j] = '\0';
}

int main(void)
{
    int len;
    char line[MAXLINE];
    while ((len = getLine(line, MAXLINE)) > 0)
    {
        removeBlanks(line, len);
        printf("%s", line);
    }
    return 0;
}
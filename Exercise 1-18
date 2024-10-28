
#include <stdio.h>
#define MAXLINE 1000 //Maximum input

int getline(char line[], int maxline);
void copy(char to[], char from[]);
void removeTrailingSpace(char line[]);
void reverseArray(char line[], int maxline);

int main() {
    int len;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0) {
        removeTrailingSpace(line);
        //reverseArray(line, MAXLINE);

        if (line[0] != '\n' && line[0] != '\0') {
            printf("%s", line);
        }
    }
    return 0;

} int getline(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && ((c = getchar()) != EOF && c != '\n'); ++i) {
        s[i] = c;
    } if (c == '\n') {
        s[i] = c;
        ++i;
    } s[i] = '\0';
    return i;

} void copy(char to[], char from[]) {
    int i;
    i = 0;

    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
} void removeTrailingSpace(char s[]) {
    int  i;

    for (i = 0; s[i] != '\0'; ++i);
    --i;

    while (i >= 0 && (s[i] == '\n' || s[i] == '\t' || s[i] == ' ')) {
        i--;
    }

    s[i + 1] = '\n';
    s[i + 2] = '\0';
} 

#include <stdio.h>
#define MAXLINE 1000 //Maximum input

int getline(char line[], int maxline);
void copy(char to[], char from[]);
void reverseArray(char line[]);

int main() {
    int len;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0) {
        reverseArray(line);
        printf("%s", line);

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
}  void reverseArray(char s[]) {
    int i, j;
    char temp;

    for (i = 0; s[i] != '\0'; ++i)
        ;


    for (j = 0; j < i/2; j++) {
        temp = s[j];
        s[j] = s[i-1-j];
        s[i-1-j] = temp;
    }
}

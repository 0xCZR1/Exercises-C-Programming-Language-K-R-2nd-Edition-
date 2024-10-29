#include <stdio.h>
#define TAB_WIDTH  4

int main (void) {
    int c, current_pos = 0, spaces_to_add;

    while ((c =getchar()) != EOF) {
        if (c == '\t') {
            spaces_to_add = TAB_WIDTH - (current_pos % TAB_WIDTH);
            for (int  i = 0; i < spaces_to_add; i++) {
                putchar(' ');
                ++current_pos;
            }

        }
        else {
            putchar(c);
            ++current_pos;
        }
        if (c == '\n') {
            current_pos = 0;
        }
    }
    }

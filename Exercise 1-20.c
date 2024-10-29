#include <stdio.h>
#define TAB  ' '

int main (void) {
    int c, i, current_pos, spaces_to_add, step, jump;
    current_pos = 0;
    step = 0;
    jump = 0;
    while (( c = getchar()) != EOF) {
        ++current_pos;
        if (current_pos % 4 == 0)
            jump = step + 4;
        if (c == '\t') {
            spaces_to_add = jump - (current_pos % jump);
            for ( i = jump ; i <= spaces_to_add; i++)
                putchar(' ');
        }
        putchar(c);

    }
}

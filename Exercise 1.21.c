#include <stdio.h>
/* Exercise 1-21. Write a program entab that replaces strings of blanks by the minimum
number of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab.
When either a tab or a single blank would suffice to reach a tab stop, which should be given
preference?  */

#define TAB_WIDTH 4

int main(void) {
    int c, space_count = 0, current_position = 0;
    //test    test
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++space_count;
            if ((current_position + space_count) % TAB_WIDTH == 0) {
                putchar('\t');
                current_position += (TAB_WIDTH - (current_position % TAB_WIDTH));
                space_count = 0;
            }
        }
        else {

            while (space_count > 0) {
                putchar(' ');
                current_position++;
                space_count--;
            }
            if (c != ' '){
                ++current_position;
                putchar(c);
            }
            if (c == '\n') {
                space_count = 0;
                current_position = 0;
            }
        }
    }
}




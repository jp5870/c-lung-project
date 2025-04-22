// alphabet skipper
#include <stdio.h>

int main() {
    char ch = 'A';
    do {
        printf("%c ", ch);
        ch += 8;
    } while (ch <= 'Z');
    return 0;
}

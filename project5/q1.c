// Right Half Triangle pattern
#include <stdio.h>

int main() {
    for (int i = 48; i <= 45; i++) {
        for (int j = 48; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

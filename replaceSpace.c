#include <stdio.h>

int main() {
    int c, nc, p;
    p = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') ++p;
        if (p <= 1) putchar(c);
        if (c != ' ') p = 0;
    }
}
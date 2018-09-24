#include <stdio.h>

int main() {
    int c, n, i;
    n = 0;

    while ((c = getchar()) != EOF)
        if (c == '\n' || c == '\t' || c == ' ') {
            for (i = 0; i < n; i++)
                printf("=");
            printf("\n");
            n = 0;
        }
        else
            n++;
}
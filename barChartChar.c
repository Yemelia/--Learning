#include <stdio.h>

#define LEN 12

int main()
{
    int c, i, j;
    int nchar[LEN];

    for (i = 0; i < LEN; ++i)
        nchar[i]= 0;

    while ((c = getchar()) != EOF)
        if (c >='0' && c <= '9')
            ++nchar[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nchar[10];
        else 
            ++nchar[11];

    for (i = 0; i < LEN; ++i){
        printf("%d : ", i);
        for (j = 1; j <= nchar[i]; ++j)
            printf("|");
        printf(" > %d\n", nchar[i]);
    }    

    return 0;
}
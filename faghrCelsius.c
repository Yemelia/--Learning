#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int celsiusToFaringate() {
    float fahr, celsius;

    celsius = LOWER;

    printf("Celsius to faringate table\n");
    printf("-----------------\n");
    
    while (celsius <= UPPER) {
        fahr = celsius * (9.0/5.0) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + STEP;
    }
}

int faringateToCelsius() {
    int fahr;

    printf("Faringate to celsius table\n");
    printf("-----------------\n");
    
    for(fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
    }
}

int main() {
    celsiusToFaringate();
    faringateToCelsius();
}


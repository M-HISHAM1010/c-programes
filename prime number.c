#include <stdio.h>


int main() {
    int a, b,  c = 1;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a < 2) {
        printf("Not Prime\n");
        return 0;
    }

    for (b= 2; b <= sqrt(a); b++) {
        if (a % b == 0) {
            c = 0;
            break;
        }
    }

    if (c)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}


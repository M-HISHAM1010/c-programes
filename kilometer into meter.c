#include <stdio.h>
int main()
{
	int km;
    printf("Enter distance in kilometers: ");
    scanf("%f", &km);
    printf("%.2f kilometers is equal to %.2f miles\n", km, km * 0.621371);
    return 0;
}


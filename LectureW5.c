#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int iMax = 100000;
    int range = 10;
    float sum = 0;

    for (i = 1; i < iMax; i++)
    {
        sum += rand() % (range + 0);
        printf("%f\n", sum);
        printf("Avg = %f\n\n", sum / i);
    }
}
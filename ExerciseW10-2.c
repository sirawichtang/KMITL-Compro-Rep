#include <stdio.h>
float D2B(float dollarValue);
int main()
{
    float dollarValue;

    printf("Enter the Dollar value : ");
    scanf("%f", &dollarValue);
    printf("%.2f Dollars is equiliant to %.2f Baht\n", dollarValue, D2B(dollarValue));
    return 0;
}

float D2B(float dollarValue){
    return dollarValue * 31.25;
}
#include <stdio.h>
#include <math.h>

float getArea(float a, float b, float c);
int main()
{
    float a, b, c;
    printf("The three length of the 3 side of a triangle : ");
    scanf("%f %f %f", &a, &b, &c);
    printf("area is : %.2f\n", getArea(a, b, c));
    return 0;
}

float getArea(float a, float b, float c)
{
    float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}
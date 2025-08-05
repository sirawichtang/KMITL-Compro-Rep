#include <stdio.h>

int main()
{
    float RadiusRes;
    int LengthRes;
    float ResistRes;

    float ValueRes;

    printf("Enter Radius of Resistor (m) : ");
    scanf("%f", &RadiusRes);
    printf("Enter Length of Resistor (m) : ");
    scanf("%d", &LengthRes);
    printf("Enter Resistivity of Resistor (m) : ");
    scanf("%f", &ResistRes);

    float pi = 3.14;
    ValueRes = (ResistRes * LengthRes) / (RadiusRes * RadiusRes * pi);

    printf("The value of this resistor = %.2f OHM\n", ValueRes);

    return 0;
}
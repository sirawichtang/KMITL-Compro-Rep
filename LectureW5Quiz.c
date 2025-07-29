#include <stdio.h>

int main(){
    int Num1, Num2;
    int Menu;
    printf("Enter Num1 : ");
    scanf("%d", &Num1);
    printf("Enter Num2 : ");
    scanf("%d", &Num2);

    printf("Calculator Menu : \n1. +\n2. -\n3. *\n4. /\n");
    printf("Choose menu : ");
    scanf(("%d"), &Menu);
    switch(Menu){
        case(1):
        printf("Ans : %d + %d = %d", Num1, Num2, (Num1 + Num2));
        break;
        case(2):
        printf("Ans : %d - %d = %d", Num1, Num2, (Num1 - Num2));
        break;
        case(3):
        printf("Ans : %d * %d = %d", Num1, Num2, (Num1 * Num2));
        break;
        case(4):
        printf("Ans : %d / %d = %d", Num1, Num2, (Num1 / Num2));
        break;
    }

    printf("\n");

    return 0;
}
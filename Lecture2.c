#include <stdio.h>

int main(){
    char KmitlTxt[20] = "Kmitl";

    printf("%s\n", KmitlTxt);
    printf("%s\n", KmitlTxt);
    printf("%s\n", KmitlTxt);
    printf("%s\n", KmitlTxt);
    printf("%s\n", KmitlTxt);

    /*
    float point;
    char name[40];
    printf("please enter your name ");
    scanf("%[^\n]",name);
    printf("Enter your point ");
    //float needs & before var
    scanf("%f",&point);
    printf("\n%s's score = %.2f\n", name, point);
    */

    float num1 = 1, num2 = 2;
    printf("\nnum1 = %.2f, num2 = %.2f", num1, num2);
    num1 += num2; //just num1 = num1 + num2
    printf ("\nnum1 = %.2f", num1);
    printf ("\nnum2 = %.2f\n", num2);
    num1 -= num2--; //just num1 = num1 - num2
    printf ("\nnum1 = %.2f", num1);
    printf ("\nnum2 = %.2f\n", num2);

    //result is difference based on brackets
    char A = 10;
    printf("%d\n", 10*2*3-10/7);
    printf("%d\n", 10*2*(3-10)/7);
    printf("%d\n", 10*2>2+3); //result in 1 because true
    printf("%d\n", 10*2<2+3); //result in 0 because false

    return 0;
}
//standart in/out func
#include <stdio.h>

int main(){
    float Score1 = 4.01;
    
    //print hello world
    printf("hello world(standart). \t");
    printf("%s","Hello world(But in string). \n");
    //print var
    printf("%f\n", Score1);
    // ME!
    printf("\n My name is: %s\n","Ned Frien");
    printf(" Expected score of: %f\n", Score1);
    //Info
    printf("Age= %d, GPA= %f\n",18,4.01);
    printf("Progamming: %f\nPhysics: %f\n",4.02,4.03);

    //Blank space using (num)d
    printf("123456789012345678901234567890");
    printf("\n%20d*",46);
    printf("\n%-20d*",46);
    printf("\n%3d*",46);
    
    //scanf
    printf("\n\n\n");
    //--------------//
    int a, b, c;
    printf("Enter the first value (0 - 9)");
    scanf("%d", &a);
    printf("Value inputted: %d\n", a);
    printf("Enter the second value (0 - 9)");
    scanf("%d", &b);
    printf("Value inputted: %d\n", b);
    c = a + b;
    printf("%d + %d = %d\n", a, b, c);

    return(0);
}
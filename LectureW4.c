#include <stdio.h>
#include <unistd.h>

int main()
{
    /*float radius, pi, area;
   pi = 22.0/7; // pi = 3.14;
   
   printf ("Enter Radius of Circular : ");
   scanf ("%f", &radius);
   area = pi*radius*radius;
   printf ("Area of Circular : %.2f", area);
   return 0;

   int a = 1;
   int b = 1;
   int c = 2;

   if(a == b && c > b){ // "&&"" - AND //  "||" - OR  //  "!"" - NOT
    printf("Yippee\n");
   }else {
    printf("Sadge\n");
   }*/

   char Name[30];
   char Surname[30];
   int numID;
   float score;
   
   printf("Input your name : ");
   scanf("%s", Name);
   printf("Input your Surname : ");
   scanf("%s", Surname);
   printf("Input your ID : ");
   scanf("%d", &numID);
   printf("Input your score : ");
   scanf("%f", &score);

   printf("Name : %s  Surname : %s  ID : %d\n", Name, Surname, numID);
   if(score >= 90){
    printf("Grade A");
   }
   else if (score >= 80){
    printf("Grade B");
   }
   else if (score >= 70){
    printf("Grade c");
   }
   else if (score >= 60){
    printf("Grade D");
   }
   else{
    printf("Grade F");
   }
   
   printf("\n");

   //funni bellow

   /*printf("\nWhat is the number in your mind? :");
   int Magic;
   scanf("%d", &Magic);
   sleep(1);
   printf("Attempting to read user's mind...\n");
   sleep(3);
   printf("Simulating 69 x 10^420 possibilities...\n");
   sleep(3);
   printf("Calculating the mass of your mom...\n");
   sleep(3);
   printf("You are thinking of the number : %d!\n", Magic);*/

}
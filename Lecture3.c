#include<stdio.h>
int main()
{
   float radius, pi, area;
   pi = 22.0/7; // pi = 3.14;
   
   printf ("Enter Radius of Circular : ");
   scanf ("%f", &radius);
   area = pi*radius*radius;
   printf ("Area of Circular : %.2f", area);
   return 0;
}
#include <stdio.h>

int main()
{
    /*

    // num is the amount of students, count is the value use to loop question for high to record the value
    int num, count, range1 = 0, range2 = 0, range3 = 0, range4 = 0;
    float high[300], sumhigh = 0, avg = 0;
    printf("Please enter number of student : ");
    scanf("%d", &num);
    for (count = 0; count < num; count++) // ask question and record to an array
    {
        printf("Student %2d : ", count + 1);
        scanf("%f", &high[count]);
    }
    for (count = 0; count < num; count++) // increment the range of each student's height (This is done by checking each array position and then incrementing the value ( kinna slow ngl ))
    {
        if (high[count] <= 160)
            range1++;
        else if (high[count] <= 170)
            range2++;
        else if (high[count] <= 180)
            range3++;
        else
            range4++;
        sumhigh = sumhigh + high[count];
    }
    avg = sumhigh / num;

    printf("\n 0 - 160 : %3d", range1);
    printf("\n161 - 170 : %3d", range2);
    printf("\n171 - 180 : %3d", range3);
    printf("\n181 - 200 : %3d", range4);
    printf("\n\nAverage : %f ", avg);



    //=====================================================================//
    //=====================================================================//
    //=====================================================================//

    int row, collum, numMatrix[3][3];
    for(row = 0; row < 3; row++){
        for(collum = 0; collum < 3; collum++){
            printf("Enter Number[%d][%d] :", row, collum);
            scanf("%d", &numMatrix[row][collum]);
        }
    }
    printf("\n---  Matrix  ---\n");
    for(row = 0; row < 3; row++){
        for(collum = 0; collum < 3; collum++){
            printf("%d\t", numMatrix[row][collum]);
        }
        printf("\n");
    }

    */

    //=====================================================================//
    //=====================================================================//
    //=====================================================================//

    int num, numMatrix[10];
    for (num = 0; num < 10; num++)
    {
        printf("Enter Number[%d] :", num);
        scanf("%d", &numMatrix[num]);
    }

    for (num = 0; num < 10; num++)
    {
        if(numMatrix[num + 1] > numMatrix[num] && num + 1 < 10){
            int temp;
            temp = numMatrix[num + 1];
            numMatrix[num + 1] = numMatrix[num];
            numMatrix[num] = temp;
            printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", numMatrix[0], numMatrix[1], numMatrix[2], numMatrix[3], numMatrix[4], numMatrix[5], numMatrix[6], numMatrix[7], numMatrix[8], numMatrix[9]);
        }
    }

    return 0;
}
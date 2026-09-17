#include <stdio.h>

int main()
{
int i,j;
for(i=1;i<=5;i++)
{
for(j=1; j<=5 - i; j++)
     {
        printf(" ");
     }
     for(j=1;j<=i;j++)
        {
            printf("* ");
        }
printf("\n");
}

return 0;

}

/*
Row (i)    Spaces to Print (rows - i)    Stars to Print (i)    What gets printed on this line
Row 1 (i=1)    5 - 1 = 4 spaces             Runs 1 time = 1 star     ____*  (4 spaces, 1 star)
Row 2 (i=2)    5 - 2 = 3 spaces             Runs 2 times = 2 stars    ___* *  (3 spaces, 2 stars)
Row 3 (i=3)    5 - 3 = 2 spaces             Runs 3 times = 3 stars     __* * *  (2 spaces, 3 stars)
Row 4 (i=4)    5 - 4 = 1 space              Runs 4 times = 4 stars      _* * * *  (1 space, 4 stars)
Row 5 (i=5)    5 - 5 = 0 spaces             Runs 5 times = 5 stars       * * * * *  (0 spaces, 5 stars)

*/
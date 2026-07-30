/* Union is same as structure but in union it have only the maximum memory in it of the data type which contains max memory defined inside it */

#include <stdio.h>

union item
{
int x;
float y;
char z;
};

int main()
{
union item i1 ;

i1.x=3;
printf("x=%d\n",i1.x);

i1.y=2.5;
printf("y=%.1f\n",i1.y);

i1.z='abhinav is good boy' ;
printf("z=%s\n",i1.z);


}
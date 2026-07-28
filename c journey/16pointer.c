/*

#include <stdio.h>
int main()
{
int x=5;
int *j; 
star is used here to show that it only stores adderess of  operator !! THIS J AFTER ASTERIC SYMBOL"*" IS POINTER VARIABLE
 

printf("%d\n", x);

printf("%d\n",j=&x);

printf("%d\n",*&x);

printf("j is %d ",j);
return 0;

}
 
*/

#include <stdio.h>
int main()
{
int x=5 ;
int *j=&x;
 /*
star is used here to show that it only stores adderess of  operator !! THIS J AFTER ASTERIC SYMBOL"*" IS POINTER VARIABLE
 */ 

printf("%d\n", x);

printf("%u\n",j);

printf("%d\n",*&x);

printf("j is %u ",j);
return 0;

}
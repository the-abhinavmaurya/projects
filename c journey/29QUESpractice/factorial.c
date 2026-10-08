#include <stdio.h>
int main()
{
int num,fact=1,i=1 ;
printf("Enter a number to calculate its factorial\n");
scanf("%d",&num);
while(i<=num)
{
fact=fact*i ;
i++ ;
}
printf("factorial of %d is %d",num,fact);

return 0 ;
}
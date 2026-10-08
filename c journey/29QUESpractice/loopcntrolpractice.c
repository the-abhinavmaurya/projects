#include <stdio.h>
int main()
{
int hours,otpay,i=1 ;
while (i<=10)
{
    printf("Enter the number of hours you worked\n");
    scanf("%d",&hours);
if (hours>=40)
{
otpay = ( hours-40)*120 ;
}
else 
otpay = 0 ;
printf("Hours=%d and otpay=%dRs\n",hours,otpay);

i++ ;
}


return 0 ;


}
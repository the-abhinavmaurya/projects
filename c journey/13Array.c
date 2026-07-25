#include <stdio.h>
int main()
{
int a[10],i,sum ;
float avg;
printf("Enter 10 Number which you want to add:\n");


for(i=0; i<=9;i++)
{
    scanf("%d",&a[i]); /*scanf ko yahan iss liye rkkha taki saari value sacn ho paaye pahle maine yeh loop k bahar rkha tab yeh work nhi kr rha tha kyuki ye sirf 1 value to scan kr rha tha ya try kr raha tha*/  
sum = sum+a[i] ;
 }
avg=sum/10.0 ;
printf("The sum is %f ",avg);

}
// CALL BY REFERENCE

#include <stdio.h>
void swap(int * , int *);
int main()
{
int a,b ;
printf("Enter two numbers:");
scanf("%d %d",&a,&b);

swap(&a,&b);
// (&a,&b) it means function call  by reference or address
printf("a=%d %d=b",a,b);

}

void swap(int *x,int *y)
{
int t;
t=*x ;
*x=*y;
*y=t;

}
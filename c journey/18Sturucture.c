/*stucture ek data type ko banane k liye use hota hai jai int ya float k andar ham funct define krty hai waise hi iska use hota hai */


#include <stdio.h>
struct date
{
    int d, m, y;
};
int main()
{
//structue ki help se ne datatype ko use krne se phle struct is mandatory
 
/* 
## .(Dot Operator): Structure ke andar ke variables (members) ko access karne ke liye hamesha dot . ka use hota hai, jaise d1.d

## typedef ka use (Optional): Agar aap baar-baar struct date nahi likhna chahte, to aap typedef ka use karke struct keyword ko hata sakte hain:

*/

  struct date today, d1;
    today.d=27;
    today.m=7;
    today.y=2026;

printf("Enter today's Date");
scanf("%d/%d/%d" , &d1.d,&d1.m,&d1.y);
printf("Date: %d/%d/%d " ,d1.d,d1.m,d1.y);

}
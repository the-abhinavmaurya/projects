/*

#define PRODUCT(a,b) a*b

int main()
{
printf("Product is %d ",PRODUCT(3+5,4-3));

}

#undef PRODUCT
// It is used to forgot the preprocessor command after this 

*/




/*

#define COUNTRY INDIA
#include <stdio.h>
int main()
{
#if COUNTRY!=PAKISTAN 
     printf("pakistani rupee");
#elif COUNTRY!=NEPAL
     printf("nepali rupee");
#elif COUNTRY!=BANGLADESH
     printf("taka");
#else 
     printf("Indian Rupee");
#endif          
}

*/


/*
// #ifdef COUNTRY it means run if country is defined and #ifndef COUNTRY means run if country is not defined
#include <stdio.h>
#define COUNTRY "India"
int main()
{
#ifdef COUNTRY
       printf("%s is a great country",COUNTRY);
#endif

#ifndef COUNTRY
        printf("I Love My Country");
#endif
}

*/


#include <stdio.h>
#define ACTION(a,b)  a##b*a+b
//yaha par ## a aur b ko contanimate kar dega a=3 hai aur b=6 hai toh dono ko mila ke 36 ban jayega
int main()
{
printf("%d",ACTION(3,4));

}

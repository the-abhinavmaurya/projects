#include <stdio.h>
int main()
{
    int i ;
char s[10]={'S', 'A','U','R','A','B','H','\0',} ; 
// char s[10]= "SAURABH" auto picks null character no need to write


/*
METHOD-1
for(i=0;s[i]!='\0';i++)
{
    printf("%c",s[i]);
} 
This is used jab tak null char nhi aata tab tak print karty rho aur jaise user se data lete waqt bhi kaam aata hai aur yeh ek ek char print karta hai   */


/*
METHOD-2
printf("%s",s);
*/


//METHOD-3

printf("Enter your name:");
gets(s);
/*scanf("%s",s or &s[0]) is not used here because if you use space between any character of your name it will not print the text after that space BUT GETS(S) IGNORES THIS PROBLEM!! */


puts(s);

}
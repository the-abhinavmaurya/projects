#include <stdio.h>
int main()
{
int i;
FILE *fp;
char s[100];
fp=fopen("f1.txt","w");
if(fp==NULL)
      { 
        printf("File not found");
        exit(1);
        }
printf("Enter a string");
gets(s);


 for(i=0;i<strlen(s);i++)
 {
    fputc(s[i],fp);
     }
 fclose(fp); 



    }


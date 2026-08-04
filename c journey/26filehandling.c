#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
int i;
FILE *fp;
char s[100];
char ch;




fp=fopen("f1.txt","r");
if(fp==NULL)
{printf("File Not Found");
   exit(1);
}
ch=fgetc(fp);
while (!feof(fp))
{printf("%c",ch);
ch=fgetc(fp);
}
fclose(fp);


printf("\n");

fp=fopen("f1.txt","a");
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


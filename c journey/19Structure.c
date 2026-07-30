#include <stdio.h>
struct book input(void);
struct book
{
int bookID;
char title[20];
float price;
};
int main()
{
struct book b1;
b1=input();
printf("\nBookID- %d\nTitle- %s\nPrice- %f",b1.bookID,b1.title,b1.price);

}

struct book input()
{
    struct book b;
printf("Enter boookID,title,price\n");
fflush(stdin);
scanf("%d",&b.bookID);
//it must be used to overcome from writing price in title
while (getchar() != '\n');

gets(b.title);
scanf("%f",&b.price);
return b ;
}
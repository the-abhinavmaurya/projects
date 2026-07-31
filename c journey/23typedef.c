//it is used to rename a existing DATA TYPE

typedef struct student
{
 int rollno;
 char name[20];
 int age;
 int class;
}STUDENT;

//Here we change struct student to STUDENT for future use

void main()
{
   // struct student s1;
   //NOW
   STUDENT s1;
 s1.rollno=31;
 s1.class=3;
 s1.age=07;
 strcpy(s1.name,"saurabh");
}
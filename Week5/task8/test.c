//  Program to understand how a pointer to structure is returned from a function

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student
{
    char name[20];
    int rollno;
    int marks;
};

void display(struct student *);
struct student *func();
struct student *ptr;

int main()
{
    struct student *stuptr;
    stuptr = func();
    display(stuptr);
    free(stuptr);

    return 0;
}

struct student *func()
{
    ptr = (struct student *)malloc(sizeof(struct student));
    strcpy(ptr->name, "Joseph");
    ptr->rollno = 15;
    ptr->marks = 98;
    return ptr;
}

void display(struct student *stuptr)
{
    printf("Name  - %s\n", stuptr->name);
    printf("Rollno  - %d\n", stuptr->rollno);
    printf("Marks  - %d\n", stuptr->marks);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char fname[20];
    char lname[20];
    long double number;
    float mark;
};

int main()
{
    int user;
    struct student *ptr;

    printf("---------------------------------------------\n");
    printf("Enter Number Of Student: ");
    scanf("%d", &user);
    printf("---------------------------------------------\n\n");

    ptr = (struct student *)calloc(user, sizeof(struct student));

    for (int i = 1; i <= user; i++)
    {
        printf("-------------------------------------------\n");
        printf("------- Fill The Student- %d Detail --------", i);
        printf("\n-------------------------------------------\n");

        printf("Enter First Name:\n", i);
        scanf("%s", &(ptr + i)->fname);

        printf("Enter Last Name:\n", i);
        scanf("%s", &(ptr + i)->lname);

        printf("Enter Number:\n", i);
        scanf("%ld", &(ptr + i)->number);

        printf("Enter Mark:\n", i);
        scanf("%f", &(ptr + i)->mark);
    }

    for (int i = 1; i <= user; i++)
    {
        printf("\n-------------------------------------------\n");
        printf("---------- Detail Of Student- %d ----------\n", i);
        printf("-------------------------------------------\n");

        printf("Name:   %s %s", (ptr + i)->fname, (ptr + i)->lname);

        printf("\nNumber: %d", (ptr + i)->number);

        printf("\nMark:   %0.2f", (ptr + i)->mark);
    }
}

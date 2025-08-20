// •	Write a program to categorize a person based on their age group.

#include <stdio.h>
int main()
{

    int age;
    printf("age between 0-12 press 1\n");
    printf("age between 13-18 press 2\n");
    printf("age between 19-59 press 3\n");
    printf("age between 60-60+ press 4\n");
    printf("enter your age :\t ");
    scanf("%d", &age);

    switch (age)
    {
    case 1:
    {
        printf("this age group is called childhood");
    }
    break;

    case 2:
    {
        printf("this age group is known as adolesence");
    }
    break;

    case 3:
    {
        printf("this age group is called adulthood,during this age people learn any this according to their capacity and they are also aggressive in nature");
    }
    break;
    case 4:
    {
            printf("during this age people called senior adulthood,people may inteligent as well as experience in their fields.");
    }
    break;

default:
{
    printf("please input right option");
}
}

return 0;
}

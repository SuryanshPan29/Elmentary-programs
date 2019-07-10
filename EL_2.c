#include<stdio.h>
int main()
{    char name[20];
    printf("Please enter the name:-");
    fgets(name,20,stdin);
    printf("Welcome %s in this world of programing",name);
}


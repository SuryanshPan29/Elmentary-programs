#include<stdio.h>
int main()
{    char name[20];
    printf("Please enter the name:-");
    fgets(name,20,stdin);
    if(name[0]=='a' || name[0]=='e' ||name[0]=='i' ||name[0]=='o' ||name[0]=='u' ||name[0]=='A' ||name[0]=='E'||name[0]=='O' || name[0]=='U' || name[0]=='I')
       {
        printf("Welcome %s in this world of programing",name);
       }
     else
     {
         printf("Your name does not start from a vowel");
     }
}



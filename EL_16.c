#include<stdio.h>
#include<strings.h>
int main()
{
    char name[50];
    int lower=0;
    int higher;
    printf("Please enter the name to check the palindrome or not  ");
//    fgetc(name,50,stdin);
  gets(name);
    higher=strlen(name)-1;
    while(higher>lower)
    {//printf("%s",name[lower++]);
        if(name[lower++] != name[higher--])
        {

            printf("This is not palindrome");
            goto leave;
        }
    }
    printf("This is a palindrome");
leave:
    return 0;
}

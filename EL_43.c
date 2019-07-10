#include<stdio.h>
#include<stdbool.h>
int main()
{
    int c,i,string[50],check;
    bool flag=true,flag2=false;
    printf("Please enter the string here");
    while((c=getchar()) != '\n')
    {
        if(flag==true)
        {
            check=c;
            flag=false;
        }
        if(c!=check)
        {
            flag2=true;
            break;
        }
    }
    if(flag2==true)
    {
        printf("the string you entered is not according to the requirement");
    }
    else
    {
        printf("The string is perfect :-");
    }
}

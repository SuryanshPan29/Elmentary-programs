#include<stdio.h>
int main()
{
    int number=29,i=0;
    int userinput;
    while(i<10){
    printf("Please guess the number here");
    scanf("%d",&userinput);
    if(userinput<29)
    {
        printf("the number is too small\n
    else if (userinput==29){
        printf("YOU WON");
        break;
    }
    else
    {
        printf("the number is too large\n");
    }
    i++;
    }

}

#include<stdio.h>
int palindrome(int p)
{
    int temp,reverse=0;
    temp=p;
    while(temp!=0)
    {
        reverse=reverse*10;
        reverse+=temp%10;
        temp=temp/10;
    }
    return reverse;
}
int main()
{
    int result, number,i=0;
    printf("Please enter the number here:-");
    scanf("%d",&number);
    while(i<10)
    {   // printf("enterning\n");
        result=palindrome(number);
        if(result==number)
        {
            printf("it is palindrome and the number is %d",number);
            break;
        }
        else
        {
            number+=result;
        }
        i++;
        if(i==9)
        {
            printf("number of triles are over");
        }
    }
}

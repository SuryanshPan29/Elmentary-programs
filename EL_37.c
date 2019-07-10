#include<stdio.h>
int main()
{
    int c,s[50],i=0,j;
    char point='y';
    printf("Please enter the string here :-");
    while((c=getchar())!= '\n')
    {
        if(c == ' ')
        {
            s[i]=c;
            point='y';
        }
        else if(point=='y' && c>='a' && c<='z')
        {
            c=c-32;
            s[i]=c;
            point='n';
        }
        else if(c>='A' && c<='Z')
        {
            c=c+32;
            s[i]=c;
        }
        else
        {
            s[i]=c;
        }
        i++;
    }
    for(j=0;j<i;j++)
    {
        putchar(s[j]);
    }
}

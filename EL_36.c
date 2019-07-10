#include<stdio.h>
int main()
{
    int c,stringg[50],i=0,j;
    printf("Please enter the string here :-");
    while((c=getchar())!= '\n')
    {
        if(c!=' ')
        {
            stringg[i]=c;
            i++;
        }
    }
    for(j=0;j<i;j++)
    {
        putchar(stringg[j]);
    }
}

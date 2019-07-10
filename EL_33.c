#include<stdio.h>
int main()
{
    int c,s[11],i=0,hour0=0,hour1=0;
    printf("Please enter the time here in format hh:mm:ss:AM/PM");
    while((c=getchar())!='\n')
    {
        s[i]=c;
        i++;
    }
    printf("The time entered is :\n");
   // puts(s);
    printf("-----\n");
    for(i=0;i<=11;i++)
        {
            printf("%c",s[i]);
        }
    if(s[8]=='A')
    {
        for(i=0;i<8;i++)
        {
            printf("%c",s[i]);
        }
    }
    else
    {
        hour0=s[0]-'0';
        hour1=(hour0*10)+(s[1]-'0');
        hour1+=12;
        printf("The time 24 hour format is is :----\n");
        printf("%d",hour1);
        for(i=2;i<8;i++)
        {
            printf("%c",s[i]);
        }
    }
}

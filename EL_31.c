#include<stdio.h>
int fabo(int number)
{
    int fab[number+1],i;
    fab[0]=0;
    fab[1]=1;
    for(i=2;i<number;i++)
    {
        fab[i]=fab[i-1]+fab[i-2];
    }
    for(i=0;i<number;i++)
        printf("%d\n",fab[i]);
}
int main()
{
    int number,fab[50],i;
    printf("PLASE ENTER THE NUMBER HERE UPTO WHICH YOU WANT TO PRINT FIBONACII SERIES ");
    scanf("%d",&number);
    fabo(number);
}

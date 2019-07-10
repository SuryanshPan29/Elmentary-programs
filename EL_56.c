#include<stdio.h>
int main()
{
    int dec,octal[100],i=0,j;
    printf("Please enter the number in decimal\n");
    scanf("%d",&dec);
    if(dec==1)
    {
        printf("The equivalent binary number is 1");
    }
    while(dec>8)
    {
        octal[i]=dec%8;
        dec=dec/8;
        i++;
    }
    octal[i]=dec;
    printf("%d\n",i);
     printf("The equivalent octal number is \n");
    for(j=i;j>=0;j--)
    {
       printf("%d",octal[j]);
    }
}



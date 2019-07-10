#include<stdio.h>
int main()
{
    int dec,binaary[100],i=0,j;
    printf("Please enter the number in decimal\n");
    scanf("%d",&dec);
    if(dec==1)
    {
        printf("The equivalent binary number is 1");
    }
    while(dec!=1)
    {
        binaary[i]=dec%2;
        dec=dec/2;
        i++;
    }
    binaary[i]=1;
    printf("%d\n",i);
     printf("The equivalent binary number is \n");
    for(j=i;j>=0;j--)
    {
       printf("%d",binaary[j]);
    }
}

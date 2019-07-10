#include<stdio.h>
int main()
{
    int number,result[40],temp,check,j,i=0;
    printf("Please enter the number here:-\n");
    scanf("%d",&number);
    temp=number;
    while(temp!=0)
    {
        check=temp%10;
        printf("check == %d\n",check);
        if(number%check==0)
        {
            result[i]=check;
            i++;
        }
        temp=temp/10;
    }
    printf("The digit from the number which evenly divides the number are:-\n");
    for(j=0;j<i;j++)
    {
        printf("%d\n",result[j]);
    }
}

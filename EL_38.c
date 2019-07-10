#include<stdio.h>
#include<stdbool.h>
bool find_perfect(int number)
{
    int arr[50],i=1,j=0,sum=0;
    while(i<(number))
    {
        if(number%i==0)
        {
            arr[j]=i;
            j++;
        }
        i++;
    }
    i=0;
    for(i=0;i<j;i++)
    {
        sum+=arr[i];
    }
    printf("%d",sum);
    if(sum==number)
    {
        return true;
    }
    else
    {
        return false;
    }

}




int main()
{
    int number,i;
    bool result;
    printf("Please enter the number");
    scanf("%d",&number);
    result=find_perfect(number);
    if(result==true)
    {
        printf("The number entered is a perfect number");
    }
    else if(result==false)
    {
        printf("The number entered is not the perfect number");
    }

}

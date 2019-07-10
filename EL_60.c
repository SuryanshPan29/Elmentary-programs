#include<stdio.h>
#include<math.h>
int main()
{
    int number,result[40],temp,check,j,i=0,num=0;
    double power,num2=0;
    printf("Please enter the number here:-\n");
    scanf("%d",&number);
    temp=number;
    while(temp!=0)
    {
        check=temp%10;
        printf("check == %d\n",check);
        if(check==0)
        {
            result[i]=5;
            i++;
        }
        else
        {
            result[i]=check;
            i++;
        }
        temp=temp/10;
    }
    printf("---------\n");
     for(j=i-1;j>=0;j--)
    {
      printf("%d\n",result[j]);
    }
    for(j=i-1;j>=0;j--)
    {   power=pow((double)10,(double)j);
        printf("Power is %lf\n",power);
        num2+=(double)result[j]*power;
        printf("%.0lf\n",num2);
    }
    printf("----The number is %.0lf",num2);
    return 0;
}

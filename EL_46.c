#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int callen(int number)
{  int i=0;
    while(number!= 0)
    {
        number=number/10;
        i++;
    }
   return i;

}
bool finalcheck(long long  int number)
{   bool flag=true;
    int check[11],i;
    long long int temp;
    while(number !=0)
    {
        temp=number%10;
        ++check[temp];
        number=number/10;
    }
    for(i=1;i<=10;i++)
    {
        if(check[i]==0 || check[i]>1)
        {
            flag=false;
        }
    }
    if(flag==true)
    {
        return true;
    }
    else
    {
        return false;
    }
}
 int times(int number)
{   int temp=1;
    int i;
    for(i=0;i<number;i++)
    {
        temp*=10;
    }
    printf("%d\n",temp);
    return temp;
}
int main()
{
    int number,temp,i=0,multhree,multhreei,multwo,power;
    long int concatenat;
    //double power;
    bool flag;
    printf("Please enter the two or three digit number\n");
    scanf("%d",&number);
    temp=callen(number);
    printf("the value of i is %d\n",temp);
    if(temp<2)
    {
        printf("please enter the two or three digit\n");
        goto end;
    }
    multwo=number*2;
    printf("the value of the multwo is %d\n",multwo);
    multhree=number*3;
    printf("the value of the multhree is %d\n",multhree);
    multhreei=callen(multhree);
    printf("the number of digits in mul3 is %d----\n",multhreei);
    power=times(multhreei);
    printf("the value of power is %d\n",power);
    //power=pow(double(10),double(multhreei))
    multwo=multwo*power;
    printf("the value of the mul2 with 00  is %ld----\n",multwo);
    concatenat=multhree+multwo;
    printf("the value of the concatenation is %ld----\n ",concatenat);
    flag=finalcheck(concatenat);
    if(flag==true)
    {
        printf("This number is the fascinating number\n");
    }
    else
    {
        printf("This number is not  the fascinating number\n");

    }



end:
    return;
}

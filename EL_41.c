#include<stdio.h>
int main()
{  int time[10],min0=0,min1=0,hour0=0,hour1=0,i=0,c;
    printf("Please enter the time here:-");
     while((c=getchar())!='\n')
    {
        time[i]=c;
        i++;
    }
    min0=time[3]-'0';
    min0*=10;
    min1=time[4]-'0';
    min1=min1+min0;
    hour0=time[0]-'0';
    hour0*=10;
    hour1=time[1]-'0';
    hour1=hour0+hour1;
   // printf("min0 %d\n",min0);
    //printf("min1 %d\n",min1);
    //printf("hour0 %d\n",hour0);
    //printf("hour1 %d\n",hour1);
    if(min1<30)
    {
        printf("Time is :: %d minutes past %d",min1,hour1);
    }
    else if(min1 == 30)
    {
        printf("Time is :: half past %d",hour1);
    }
    else if(min1 == 45)
    {
        printf("Time is :: quoter to %d",hour1+1);
    }
    else
    {
        printf("Time is :: %d to %d",min1-30,hour1+1);
    }

}

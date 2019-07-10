#include<stdio.h>
int main()
{ int i=0,j;
    while(i<=12)
    {        printf("Table for %d\n",i);

        for(j=1;j<=10;j++)
        {
            printf("%d * %d = %d\n",i,j,i*j);
        }
        i+=1;
    }
}

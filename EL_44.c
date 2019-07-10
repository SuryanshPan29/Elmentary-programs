#include<stdio.h>
int main()
{
    int uc =0,lc =0,dig = 0,sc = 0,c;
    while((c=getchar()) !='\n')
    {
        if(c>='A' && c<='Z')
        {
            uc++;
        }
        else if(c>='a' && c<='z')
        {
            lc++;
        }
        else if(c>='0' && c<='9')
        {
            dig++;
        }
        else{sc++;}
    }
    printf("The number of the upper case character are %d\n",uc);
    printf("The number of the lower case character are %d\n",lc);
    printf("The number of the digits are %d\n",dig);
    printf("The number of the special character are %d\n",sc);

}

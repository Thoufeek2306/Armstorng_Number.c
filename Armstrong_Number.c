#include<stdio.h>
int main()
{
    int a,b,c=0,d=0,e;
    printf("Enter a number \n");
    scanf("%d",&a);
    e=a;
    while(a>0)
    {
        b=a%10;
        c=b*b*b;
        d=d+c;
        a=a/10;
    }
    if(d==e)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not armstrong number");
    }
}

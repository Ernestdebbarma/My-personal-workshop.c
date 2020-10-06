#include<stdio.h>

int suck(int, int);

int main(void)
{
    int a,b,sum;

    printf("give any two number to sum: ");
    scanf("%d %d",&a,&b);

    sum=suck(a,b);
    printf("the total is=%d",sum);
    return 0;
}
int suck(int a,int b)
{
    int k;
    k=a+b;
    return(k);
}

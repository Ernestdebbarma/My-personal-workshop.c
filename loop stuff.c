//please help yourself with the required multiplication

#include<stdio.h>
int main()
{
    int a,b;

    printf("this program give the multiplication of any number given\n");
    printf("enter your number: ");
    scanf("%d",&a);

    for(b=1;b<=10;b++)
    printf("%d * %d = %d\n",a,b,b*a);

    return 0;
}

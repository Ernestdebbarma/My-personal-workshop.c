#include<stdio.h>
int main()
{
    printf("hi im your calculator\n\n");

    char tamo;
    double n1,n2;

    printf("enter an operator(+,-,*,/): ");
    scanf("%c",&tamo);
    printf("enter two operand:\n");
    scanf("%lf%lf",&n1,&n2);

    switch(tamo)
    {
    case'+':
        printf("%.1lf + %.1lf=%.1lf",n1,n2,n1+n2);
        break;

    case'-':
        printf("%.1lf - %.1lf = %.1lf",n1,n2,n1-n2);
        break;

    case'*':
        printf("%.1lf * %.1lf = %.1lf",n1,n2,n1*n2);
        break;

    case'/':
        printf("%.1lf / %.1lf = %.1lf",n1,n2,n1/n2);
        break;
    default:
        printf("     nini number remani error se.");

    }

    return 0;
}

#include<stdio.h>
int main()
{
    int a,b,c;

    for(a=30,b=40,c=0;c<20,a<60,b<80;a++,b++,c++)
    {
        printf("%d\n",a);
        printf("  %d\n",b);
        printf("    %d\n",c);
    }


    return 0;
}

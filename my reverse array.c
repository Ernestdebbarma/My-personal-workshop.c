#include<stdio.h>
#define ran 4
int main()
{
    int arr[ran];
    int i=0;

    for(i=0;i<4;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<4;i++)
        printf("\n%d\n",arr[i]);

    for(i=3;i>=0;i--)
    printf("%d\t ",arr[i]);


    return 0;
}

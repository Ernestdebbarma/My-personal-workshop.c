#include<stdio.h>
int main()
{
    int arr[6]={-1, -3, -5, -6, 5, 4};
    int i=0, l=0, j=0, nega=0;
    int gg[10]={0};

    for(i=0; i<6; i++)
    {
        if(arr[i]<0)
        {   
         nega++;
         gg[nega]=arr[i];
        }

    }
    for(nega=0; nega<6; nega++)
printf("%d, ", gg[nega]);
    return 0;
}

#include<stdio.h>
int main()
{
  int arr[]={1,2,3,4,5};
  int tem=0, i=0, j=0;

for (i=0; i<5; i++)
{
    for (j=0; j<5; j++)
    if(arr[i]>arr[j])
        tem =arr[i];
}
printf("candle with size %d will light room for %d min", tem, tem);
return 0;
}

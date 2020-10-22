#include<stdio.h>

int swap (int x, int y)
{
  int temp = 0;
  temp = x;
  x = y;
  y = temp;

  return 0;
}

int main()
{
  int arr[10] = {1,-3,-4,5,-6,7,-8,9,0};
  int i, j = i+1, count = 0;

  for(i=0; i<10; i++)
  {
    if(arr[i]<0)
      count++;
  }
  while(i != count)
  {
    if(arr[i]<0){
      i++;
      j++;
    }
    else if (arr[i]>0 && j<10)
    {
      swap(arr[i], arr[j]);
      j++;
    }
  }
for (int i = 0; i < 10; ++i)
{
  printf("%d, ", arr[i]);
}
  return 0;
}

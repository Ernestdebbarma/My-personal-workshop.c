#include<stdio.h>
int main()
{
    int fre[]={-1,-1,2,-2,4,-4,4,5,1};
    int i, j=0, swap=0;
    for(i=0; i<9; i++)
    {
        if(fre[i]<0)
        {
           swap = fre[i];
           fre[i] = swap;
           
        }
        printf("%d, ", fre[i]);
    }

	return 0;
}

/*
int i = 0, j = i + 1; 
    while (i != count) { 
 
        if (arr[i] < 0) { 
            i++; 
            j = i + 1; 
        }
        else if (arr[i] > 0 && j < n) { 
            swap(arr[i], arr[j]); 
            j++; 
        } 
    } 
*/

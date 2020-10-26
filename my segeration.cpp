#include<iostream>
using namespace std;

int main()
{
	int i = 0, j = i + 1;
	int neg_con = 0;
    int arr[7] = {-1, 2, -3, 4, -5, 6, -7};
    for(int i = 0; i<7; i++)
    {
    	if (arr[i] < 0)
    	{
    	neg_con++;
    	}
    }
    while(i != neg_con)
    {
        if(arr[i] < 0)
        {
        	i++;
        	j++;
        }
        else if (arr[i] > 0)
        {
        	swap (arr[i], arr[j]);
        	j++;
        }
    
    }
    for (int i = 0; i < 7; ++i)
    {
    	cout<<arr[i]<<", ";
    }
    
	return 0;
}

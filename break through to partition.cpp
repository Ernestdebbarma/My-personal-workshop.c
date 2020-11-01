#include<iostream>
#include <algorithm>
using namespace std;

void pertition(int arr[], int start, int end)
{
	int pivot = arr[end];
	int pindex = start;
		
	for (int i = start; i < end; ++i)
	{
		if(arr[i]<=pivot)
		{
			swap(arr[i], arr[pindex]);
			pindex = pindex + 1;
		}
	}
	swap(arr[pindex], arr[end]);
	sort(arr,arr+6);
	for (int i = 0; i < 6; ++i)
	{
		cout<<arr[i]<<" ";
		/* code */
	}
}

int main()
{ 
	int arr[6] = {1,3,5,6,8,4};
	pertition(arr, 0, 5);
	return 0;
}

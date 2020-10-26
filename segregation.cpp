#include<iostream>
using namespace std;
int main()
{
	int arr[]={2,8,-1,7,6,4,-8,9,-3};
	int i=0;int j=i+1;   //pointing of two pointers
	//counting the total number of negative numbers
	int neg_num=0;
	for(int j=0;j<9;j++)
	{
		if(arr[j]<0)
		neg_num++;
	}
	while(i!=neg_num)
	{
		if(arr[i]<0)
		{
			i++;
			j=i+1;
		}
		else if(arr[i]>0)
		{
			swap(arr[i],arr[j]);
			j++;
		}
	}
	for(int i=0;i<9;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}

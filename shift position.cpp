#include<iostream>
using namespace std;
void reverse(int arr[], int start, int end)
{
  while(start < end)
  {
  	swap(arr[start], arr[end]);
  	start++;
  	end--;
  }
}

int
main()
{
   int n;
   cout<< "give your size of array ";
	cin >> n;
   int pos;
   cout << "position ";
   cin >> pos;
   int arr[n];
   cout << "give your elements ";
   for (int i = 0; i < n; ++i)
   {
     cin >> arr[i];	
   }
   int size = sizeof(arr)/sizeof(arr[0]);
   int start1 = 0;
   int end1 = size - 1 - pos;
   int start2 = size - pos;
   int end2 = size - 1;

   reverse (arr, start2, end2);
   reverse (arr, start1, end1);
   reverse (arr, start1, end2);

   for (int i = 0; i < size; ++i)
   {
   	cout << arr[i] << ", ";
   }

	return 0;
}

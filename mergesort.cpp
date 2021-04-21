#include<iostream>
using namespace std;

void merge(int arr[], int s, int mid, int e)
{
   int n1= mid - s +1;
   int n2= e - mid;
   
   int wai[n1], sa[n2];

   for (int i = 0; i < n1; ++i)
     wai[i]=arr[s+i];

   for (int i = 0; i<n2; i++)
   	 sa[i]=arr[mid+1+i];

   int i = 0, j = 0, k = s;

   while(i<n1 && j<n2)
   {
   	 if(wai[i]<=sa[j]){
       arr[k]=wai[i];
       i++;
   	 }
   	 else{
       arr[k]=sa[j];
       j++;
   	 }
   	 k++;
   }

    while(j<n2)
   {
   	  arr[k]=sa[j];
   	  j++;
   	  k++;
   }

   while(i<n1)
   {
   	 arr[k]=wai[i];
   	 i++;
   	 k++;
   }



}

void mergesort(int arr[], int s, int e)
{
	if(s<e)// oro omo re na ta pok di s for starting and e for ending, omo kerei lke its a mess !!!
  {
	
	int mid = s + (e-s)/2;
	
	mergesort(arr, s, mid);
	mergesort(arr, mid+1, e);

	merge(arr, s, mid, e);
    }
}

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

int main()
{
    int arr[]={4,7,99,55,4,6,127,56,6,3};
    int size = sizeof(arr)/sizeof(arr[0]);
       
    mergesort(arr, 0, size-1);
    
     cout << "Sorted array: \n";
     printArray(arr, size);
   
	return 0;
}

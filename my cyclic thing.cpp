#include<iostream>
using namespace std;
void reverse (int arr[], int first, int end)
{
    while(first<end)
    {
        swap(arr[first], arr[end]);
        first++;
        end--;
    }
}
int main()
{
   int arr[5] = {1, 2, 3, 4, 5};
   for (int i = 0; i < 5; ++i)
    {
        cout << arr[i]<<", ";
       
    }
    cout <<endl;
    reverse(arr, 0, 4);
    reverse(arr, 1, 4);
    reverse(arr, 2, 4);
    reverse(arr, 3, 4);
    for (int i = 0; i < 5; ++i)
    {
        cout << arr[i]<<", ";
       
    }

    return 0;
}

#include <iostream>
#include <conio.h>
using namespace std;
int max(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int min(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
void printarray(int arr[], int size)
{
    int i;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];

        // if (arr[i] < size)
        // {
        //     cout << "lesser elements in array";
            
        // }
        // else if (arr[i] > size)
        // {
        //     cout << "more elements in array";
            
        // }
    }
}
int main()
{
    int size;
    cout << "size is"<<" ";
    cin >> size;
    int arr[size];
    cout << "enter elements in array"<<" ";
    printarray(arr, size);
    cout << "max is:"<< " " << max(arr, size);
    cout<<endl; //endl for new line
    cout << "min is:"<< " " << min(arr, size);
}
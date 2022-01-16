#include <iostream>
#include <conio.h>
using namespace std;
void swapalternate(int arr[], int size)
{   
    int i;
    int temp[size];
    for (int i = 0; i < size; i += 2)
    {
        if (i+1 < size)
        {   
            swap(arr[i], arr[i+1]);
            
        }
    }
    // for(i=0;i<size;i++)
    // {
    //  cout<<arr[i];
    // }
}

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin>> arr[i];
    }
}
int main()
{
    int i;
    int size;
    int arr[size];
    cout << "enter size"<< " ";
    cin >> size;
    cout << "enter array to be swapped";
    printarray(arr, size);
    cout << endl;
    cout << "alternate swapped array is:"<< " ";
    swapalternate(arr, size);
    // printarray(arr,size);
}
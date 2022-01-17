#include <iostream>
#include <conio.h>
#include <algorithm>
using namespace std;

int main()
{
    int i, j;
    int row, col;
    int arr1[10][10];
    int arr2[10][10];
    int sum[10][10];
    cout<<"no of rows:"<<" ";
    cin>>row;
    cout<<"no of col:"<<" ";
    cin>>col;
    cout << "enter 1st array:"<<"\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "enter 2nd array:"<< "\n ";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> arr2[i][j];
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            sum[i][j]= arr1[i][j]+arr2[i][j];
        }
    }
        cout<<"addition of matrix is:";
        for (i = 0; i < row; i++)
    {  
        for(j=0;j<col;j++)
        {
        cout <<sum[i][j]<<" ";
        }
    }
    return 0;
}
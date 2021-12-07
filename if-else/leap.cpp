#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter the year to check"<<"\n";
    cin>>year;
    /*leap year is divisble by 4, except for century year eg : 2100 */
    if(year%400==0)
    {
        cout<<"leap year"<<"\t"<<year;
  
    }
    else if (year%100==0)
    {
        cout<<"not a leap year"<<"\t"<<year;
    }
    else if (year%4==0)
    cout<<"leap year"<<"\t"<<year;
    else
    cout<<"not a leap year"<<"\t"<<year;
    return 0; 

}
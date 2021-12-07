#include<iostream>
using namespace std;
int main()
{
 char c;
 int lower, upper,consonant;
 cout<<"enter character to be checked:";
 cin>>c;
 lower=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
 upper=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
 if(lower||upper)
 {
    cout<<"character is vowel:"<<"\n"<<c;

 }
 else 
    cout<<"character is consonant:"<<"\n"<<c;
    return 0;

}
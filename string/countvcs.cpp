#include<iostream>
using namespace std;
int main()
{
    char str[100];
    int i=0,vcount=0,ccount=0,scount=0,wcount=1;
    cout<<"enter string to check"<<" ";
    /*using gets to get the string because in cout we can get only one word that is S so by using gets() we overcome that issue*/
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {    
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            vcount++;
        }
        else if((str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122))
        {
            ccount++;
        }
        else if((str[i]==' '))
        {
            scount++;
            wcount++;
        }
        /*else if((str[i]==' '))
        {
            wcount++;
        }*/
    }
    cout<<"vowel in string is:"<<" "<<vcount<<"\n";
    cout<<"consonant in string is:"<<" "<<ccount<<"\n";
    cout<<"space in string is:"<<" "<<scount<<"\n";
    cout<<"words in string is:"<<" "<<wcount;

}
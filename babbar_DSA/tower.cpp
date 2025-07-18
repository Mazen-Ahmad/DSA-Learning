#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int r=0;r<t;t++)
    {
    int h1,h2;
    cin>>h1>>h2;
    char s1[h1],s2[h2];
    for(int i=0;i<h1;i++)
        cin>>s1[i];
    for(int i=0;i<h1;i++)
        cin>>s2[i];

    for(int c=0;c<h1;c++)
    {
        if(s1[c]==s1[c+1])
        {
            h2=h2+1;
            s2[h2-1]=s1[h1-1];
            h1=h1-1;
        }
    }
    }
}
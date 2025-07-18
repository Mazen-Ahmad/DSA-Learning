#include<iostream>
using namespace std;
int main()
{
    string str,str1,chck,chck1;
    char tem;
    getline(cin,str);
    str1=str;
    int i=0;
    while(str[i]!='\0')
    i++;
    cout<<"length is: "<<i<<endl;
    int n=i-1,s=0;
    for(;s<i/2;s++,n--)
    {
        tem=str[s];
        str[s]=str[n];
        str[n]=tem;
    }
    cout<<"string is now: "<<str<<endl;
    for(int k=0;k<str.length();k++)
    {
        if((str[k]>='A'&&str[k]<='Z')||(str[k]>='a'&&str[k]<='z'))
        {
            chck=chck+str[k];
        }
        if((str1[k]>='A'&&str1[k]<='Z')||(str1[k]>='a'&&str1[k]<='z'))
        {
            chck1=chck1+str1[k];
        }
    }
    if(chck==chck1)
    {
        cout<<"palindrome";
    }
    else
    cout<<"not pd";
}
#include<iostream>
using namespace std;
bool chckeql(int a[26],int b[26])
{
    for(int i=0;i<26;i++)
    {
        if(a[i]!=b[i])
        return false;
    }
    return true;
}
int main()
{
    string s1,s2;
    cout<<"enter the string"<<endl;
    getline(cin,s1);
    cout<<"enter substring to search"<<endl;
    getline(cin,s2);
    int cnt1[26]={0},cnt2[26]={0},c=0;
    for(int i=0;i<s2.length();i++)
    {
        int ind=s2[i]-'a';
        cnt1[ind]++; 
    }
    int i=0;
    for(;i<s2.length() && i<s1.length();i++)
    {
        int ind=s1[i]-'a';
        cnt2[ind]++;
    }
    if(chckeql(cnt1,cnt2))
    c++;
    while(i<s1.length())
    {
        int ind=s1[i]-'a';
        cnt2[ind]++;
        cnt2[s1[(i-s2.length())]-'a']--;
        i++;
        if(chckeql(cnt1,cnt2))
        {
        c++;
        break; 
        }  
    }
    if(c!=0)
    cout<<"permutation found";
    else if(c==0)
    cout<<"permutation not found";
}
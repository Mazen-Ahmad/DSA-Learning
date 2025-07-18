#include<iostream>
using namespace std;
int main()
{
    int arr[26]={0},d,max=0;
    string s;
    char ans;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            d=int(s[i]-'a');
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            d=int(s[i]-'A');
        }
        arr[d]=arr[d]+1;
        if(arr[d]>max)
        {
        max=arr[d];
        ans=char(d+97);
        }
        else if(arr[d]==max)
        {
            if(char(d+97)<ans)
            {
                ans=char(d+97);
            }
        }
    }
    cout<<ans;
}
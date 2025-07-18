/*#include<iostream>
using namespace std;
int main()
{
    string txt,word="",nword="",ans="";
    getline(cin,txt);
    txt=txt+" ";
    for(int i=0;i<txt.length();i++)
    {
        if(txt[i]!=char(32))
        {
            word=word+txt[i];
        }
        else
        {
            for(int k=word.length()-1;k>=0;k--)
            {
                nword=nword+word[k];
            }
            ans=ans+nword+" ";
            word="";
            nword="";
        }
    }
    cout<<ans;
}*/

#include<iostream>
using namespace std;
string rev(string s, int st, int e)
{
    if(st>=e)
    {
        return s;
    }
    char c=s[st];
    s[st]=s[e];
    s[e]=c;
    return rev(s,st+1,e-1);
}
int main()
{
    string s;
    cout<<"enter the string"<<endl;
    cin>>s;
    int st=0, e=s.length()-1;
    cout<<"reversed string is: "<<rev(s,st,e);
}
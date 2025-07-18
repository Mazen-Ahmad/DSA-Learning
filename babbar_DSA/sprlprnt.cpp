#include<iostream>
using namespace std;
int main()
{
    int r,c,sum=0;
    cout<<"enter no. of rows and columns"<<endl;
    cin>>r>>c;
    int arr[r][c];
    cout<<"enter elements row wise"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        cin>>arr[i][j];
    }
    int j=0,i=0,cn=0,k=0;
    while(cn<r*c)
    {
        for(;j<c-k;j++)
        {
            cout<<arr[i][j];
            cn++;
        }
        i++;
        j--;
        for(;i<r-k;i++)
        {
            cout<<arr[i][j];
            cn++;
        }
        i--;
        j--;
        for(;j>=0+k;j--)
        {
            cout<<arr[i][j];
            cn++;
        }
        j++;
        i--;
        k++;
        for(;i>=0+k;i--)
        {
            cout<<arr[i][j];
            cn++;
        }
        i++;
        j++;
    }
}
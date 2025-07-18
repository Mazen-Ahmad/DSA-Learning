#include<iostream>
using namespace std;
int main()
{
    int r,c,sum=0,cntr=1;
    cout<<"enter no. of rows and columns"<<endl;
    cin>>r>>c;
    int arr[r][c];
    cout<<"enter elements row wise"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int j=0;j<c;j++)
    {
        if(cntr%2!=0)
        {
            for(int i=0;i<r;i++)
            {
                cout<<arr[i][j];
            }
        }
        else
        {
            for(int i=2;i>=0;i--)
            {
                cout<<arr[i][j];
            }
        }
        cntr++;
    }
}
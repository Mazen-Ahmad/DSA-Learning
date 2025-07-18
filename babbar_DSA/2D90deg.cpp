#include<iostream>
using namespace std;
int main()
{
    int r,c;
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
    int temparr[c-1];
    for(int i=c-2,k=c-1;i>=0,k>=0;i--,k--)
    {
        temparr[i]=arr[i+1][c-1];
        arr[k][c-1]=arr[0][k];
    }
    int t=0;
    for(int i=c-2,p=0;p<c-1,i>=0;p++,i--)
    {
        t=arr[c-1][i];
        arr[c-1][i]=temparr[p];
        temparr[p]=t;
    }
    for(int i=c-2,p=0;p<c-1,i>=0;p++,i--)
    {
        t=arr[i][0];
        arr[i][0]=temparr[p];
        temparr[p]=t;
    }
    for(int i=1,p=0;p<c-2,i<c-1;p++,i++)
    {
        arr[0][i]=temparr[p];
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
}
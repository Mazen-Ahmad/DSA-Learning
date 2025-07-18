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
        {
            cin>>arr[i][j];
            sum=sum+arr[i][j];
        }
        cout<<"sum of row "<<i+1<<" is: "<<sum<<endl;
        sum=0;
    }
}
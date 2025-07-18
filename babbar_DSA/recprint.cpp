#include<iostream>
using namespace std;
int print(int n)
    {
        if(n==0)
        return 0;
        print(n-1);
        cout<<n<<endl;
    }
int main()
{
   int n=5;
   print(n);
}
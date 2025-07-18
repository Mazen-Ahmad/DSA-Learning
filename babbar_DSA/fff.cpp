#include<iostream>
using namespace std;
int main(){
    int a[5]={2,4,5,3,5};
    for(int x:a){
        cout<<++x;
    }
    cout<<endl;
    for(int x:a){
        cout<<x;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n,b,width=0;
    cin>>n>>b;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=b){
            width++;
        }
        else{
            width+=2;
        }
    }
    cout<<width;
    return 0;
}
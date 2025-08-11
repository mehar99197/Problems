#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size of Array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
cout<<"Enter Number:";
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}
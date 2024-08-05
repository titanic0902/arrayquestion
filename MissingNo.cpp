#include<iostream>
using namespace std;
int missingno(int arr[],int n){
    int sum = (n*(n+1))/2;
    int target =0;
    for(int i=0;i<n;i++){
       target += arr[i] ;
    }
        int ans = sum-target;
    return  ans;

}



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = missingno(arr,n);
    cout<<ans;

}
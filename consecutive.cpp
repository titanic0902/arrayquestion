#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int consecutive(int arr[],int n){
    sort(arr , arr+n);
    int count =0;
    int lastelemnt =-1;
    int maxi =0;
    for(int i=0;i<n;i++){
        if(arr[i]-1 == lastelemnt){
            count++;
            lastelemnt = arr[i];
        }
        else if(arr[i]!=lastelemnt){
            lastelemnt = arr[i];
            count = 1;
        }
      maxi = max(maxi,count);
    }
    return maxi;
}






int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = consecutive(arr,n);
    cout<<ans;


}
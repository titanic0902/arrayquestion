#include<iostream>
using namespace std;


int consecutives(int arr[],int n){
    int count =0;
    int max_count =0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count ++;
            max_count = max(max_count,count);
        }
        else{
            count =0;
        }
    }
    return max_count;
}










int main(){
   
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = consecutives(arr,n);
    cout<<ans;
}
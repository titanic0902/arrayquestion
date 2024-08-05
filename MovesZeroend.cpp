#include<iostream>
using namespace std;

void movezero(int arr[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    movezero(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";;
    }
}
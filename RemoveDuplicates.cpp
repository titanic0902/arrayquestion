#include<iostream>
using namespace std;

int Duplicate(int arr[],int n){
    int i=0;
    for(int j =1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1] = arr[j];
             i++;

        }
       
    }
    return i+1;
}


int main(){
     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k = Duplicate(arr,n);
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
   

}
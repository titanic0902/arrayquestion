#include<iostream>
#include<climits>
using namespace std;


int SecondLargest(int arr[],int n){
    int Largest = INT_MIN;
    int second = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>Largest){
            second = Largest;
            Largest = arr[i];
           
        }
        else if (arr[i]>second && arr[i]<Largest){
            second = arr[i];
        }
    }
    return second;
    

}






int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = SecondLargest(arr,n);
    cout<<ans;

}
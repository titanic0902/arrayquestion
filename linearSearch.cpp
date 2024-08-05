#include<iostream>
using namespace std;

bool LinearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}





int main(){
    int key;
    cin>>key;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(LinearSearch(arr,n,key)){
        cout<<"element is present";
    }
    else{
        cout<<"element not found ";
    }
}
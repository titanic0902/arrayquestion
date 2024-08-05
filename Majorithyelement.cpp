#include<iostream>
using namespace std;
 
int majoritelemnt(int arr[],int n){
    int count =0;
    int element =0;
    for(int i=0;i<n;i++){
        if(count ==0){
            count =1;
            element = arr[i];
        }
        else if(element == arr[i]){
            count++;
        }
        else{
            count--;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            count++;
        }
    }
    if (count > n / 2) {
        return element;
    } else {
        return -1; // No majority element found
    }
}





int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = majoritelemnt(arr,n);
    cout<<ans;
}
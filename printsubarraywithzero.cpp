#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> maxLength(int arr[],int n){
    unordered_map<int,int> mpp;
    int sum=0;
    int maxi =0;
    int start =-1;
    int end = -1;

    for(int i=0;i<n;i++){
        sum+= arr[i];
        if(sum==0){
            maxi = i+1;
            start =0;
            end =i;
           
        }
        else{
            if(mpp.find(sum)!= mpp.end()){
                maxi = max(maxi,i-mpp[sum]);
                 start = mpp[sum]+1;
                 end = i;
            }
            else{
                mpp[sum]=i;
            }
        }
    }
    if(start!=-1 && end != -1){
          return vector<int>(arr + start, arr + end + 1);
    }
    else{
        return {};
    }
}



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> subarray =  maxLength(arr,n);
    if(!subarray.empty()){
         for(int i=0;i<subarray.size();i++){
          cout<<subarray[i]<<" ";
    }
    }
    else{
        cout<<"no subarray found";
    }

    
   
   

    

}
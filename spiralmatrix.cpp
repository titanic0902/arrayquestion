#include<iostream>
#include<vector>
using namespace std;


vector<int> SpiralMatrix( vector<vector<int>> arr, int n, int m){
    vector<int> ans;
    int top=0;
    int left =0;
    int right = m-1;
    int bottom = n-1;
    while(left<= right && top<= bottom){
        for(int i = left; i<=right; i++){
            ans.push_back(arr[top][i]);
            
        }
        top++;
        for(int i = top; i<=bottom; i++){
            ans.push_back(arr[i][right]);
            
        }
        right--;
        if(top<=bottom){
            for(int i = right;i>=left;i--){
                ans.push_back(arr[bottom][i]);
               
            }
             bottom --;
        }
        if(left<=right){
            for(int i = bottom ;i>=top;i--){
                ans.push_back(arr[i][left]);
               
            }
             left++;
        }
    }
    return ans;
}




int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
   vector<int> ans =  SpiralMatrix(arr,n,m);
   for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
   }
   cout<<endl;

     
}
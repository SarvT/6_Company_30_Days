//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  bool check(int arr[],int K,int N,int mid)
  {
      int ans=1, sum=0;
      for(int i=0;i<N;i++){
          sum+=arr[i];
          if(sum>mid){
              sum=arr[i];
              ans++;
          }
      }
      if(ans<=K)return true;
      else return false;
  }
    int splitArray(int arr[] ,int N, int K) {
        // code here
        int l=INT_MIN, h=0, ans;
        
        for(int i=0;i<N;i++){
            l=max(l,arr[i]);
            h+=arr[i];
        }
        while(l<=h){
          int mid=(l+h)/2;
        if(check(arr,K,N,mid)){
            ans=mid;
            h=mid-1;
        }
        else l=mid+1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends

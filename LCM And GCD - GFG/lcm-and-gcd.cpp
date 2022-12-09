//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    
  public:
  
  long long gcd(long long A, long long B){
    //   long long ans;
    //   for(int i =1; i<=min(A, B); i++){
    //       if(A%i == 0 && B%i == 0){
    //           ans = i;
    //       }
    //   }
    if(B == 0){
        return A;
    }
      return gcd(B, A%B) ;
  }
  
    vector<long long> lcmAndGcd(long long A , long long B) {
        long long hcf = gcd(A, B);
        long long lcm = (A/hcf)*B;
        vector<long long> ans = {lcm, hcf};
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        for(int i = n; i>=1 ; i--){
            for(int j = 1; j<i; j++ ){
                cout<<" ";
            }
            char ch = 'A';
            for(int j = 0;j<=n-i; j++){
                char ch2 = ch + j;
                cout<<ch2;
            }
            char ch1= 64;
            for(int j = n-i; j>0; j--){
                char ch3 = ch1+j;
                cout<<ch3;
            }
            cout<<endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        int temp = n;
        vector<int> a;
        while(n>0){
            int digit = n%10;
            a.push_back(digit);
            n = n/10;
        }
        int sum = 0;
        for(auto i : a){
            int number = pow(i,3);
            sum = sum +number;
        }
        if(sum == temp) return "Yes";
        return "No";
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
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
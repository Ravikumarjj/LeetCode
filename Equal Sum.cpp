//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string equilibrium(int *arr, int n) {
        // code here
        if(n==0)return "NO";
        int leftSum=0, rightSum=0;
        for(int i=0;i<n;i++){
            rightSum+=arr[i];
        }
        if(rightSum-arr[0]==0) return "YES";
        rightSum-=arr[0];
        for(int i=1;i<n;i++){
            leftSum+=arr[i-1];
            rightSum-=arr[i];
            if(leftSum == rightSum) return "YES";
        }
        return "NO";
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.equilibrium(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
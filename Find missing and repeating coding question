Here is the solution for find missing and repeating coding question, solved on Day 1:
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        int t = 1e5+7;
        int hash[t]={0};
        for(int i=0;i<n;i++){
            hash[arr[i]]++;
        }
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>maxi)
            maxi = arr[i];
        }
        vector<int>v(2,0);
        for(int i=1;i<n+1;i++){
            if(hash[i] == 2)
            v[0] = i;
            if(hash[i]==0)
            v[1] = i;
        }
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends

Thank you..

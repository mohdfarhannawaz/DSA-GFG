//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  
    long long factorial(long long n){
        if(n==1){
            return 1;
        }
        return n*factorial(n-1);
    }

    vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
        vector<long long>arr(0);
        for(int i=1; i<=n; i++){
            if(factorial(i) > n){
                break;
            }
            arr.push_back(factorial(i));
        }
        return arr;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
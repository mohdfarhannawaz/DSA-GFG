//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        vector<long long> ans(2,1);
        
        // qcd 
        long long divisor = A;
        long long dividend = B;
        long long remainder = dividend;
        
        while(remainder != 0){
            remainder = dividend % divisor;
            dividend = divisor;
            divisor = remainder;
        }
        
        ans[1] = dividend;
        
        // lcm
        ans[0] = (A * B) / dividend;
        
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
//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
		long sum_of_ap(long n,long a, long d)
		{
		    // Code here.
		    long ans = (n*(1.0/2))*(2*a + (n-1)*d);
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long n, a, d;
    	cin >> n >> a >> d;
    	Solution ob;
    	long ans = ob.sum_of_ap(n, a, d);
    	cout << ans <<"\n";
    }
	return 0;
}
// } Driver Code Ends
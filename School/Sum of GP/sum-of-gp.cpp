//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		long sum_of_gp(long n,long a, long r)
		{
		    // Code here
		    long sum = 0;
		    for(int i=0; i<n; i++){
		        sum = a*pow(r,i) + sum;
		    }
		    return sum;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long n, a, r;
    	cin >> n >> a >> r;
    	Solution ob;
    	long long int ans = ob.sum_of_gp(n, a, r);
    	cout << ans <<"\n";
    }
	return 0;
}
// } Driver Code Ends
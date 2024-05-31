//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        int start = 0;
        long long end = 0;
        long long mid;
        long long ans;
        
        for(int i=0; i<n; i++){
            start = max(start, arr[i]);
            end += arr[i];
            
        }
        
        while(start <= end){
            mid = start + (end - start)/2;
            
            long long time = 0; 
            long long count = 1;
            
            for(int i=0; i<n; i++){
                time += arr[i];
                if(time > mid){
                    count++; 
                    time = arr[i];
                }
            }
            
            if(count <= k){
                end = mid - 1;
                ans = mid;
            }
            
            else {
                start = mid + 1;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends
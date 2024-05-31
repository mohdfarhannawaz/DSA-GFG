//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int leastWeightCapacity(int arr[], int n, int d) {
        // code here
        int start = 0;
        int end = 0;
        int mid;
        int ans;
        
        for(int i=0; i<n; i++){
            start = max(start, arr[i]);
            end += arr[i];
        }
        
        while(start <= end){
            mid = start + (end - start)/2;
            
            int capacity=0; 
            int days = 1;
            
            for(int i=0; i<n ; i++){
                capacity += arr[i];
                if(capacity > mid){
                    days++;
                    capacity = arr[i];
                }
            }
            
            if(days <= d){
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

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, D;
        cin >> N;

        int arr[N];
        for (int i = 0; i < N; i++)
            cin >> arr[i];
        cin >> D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr, N, D) << endl;
    }
    return 0;
}
// } Driver Code Ends
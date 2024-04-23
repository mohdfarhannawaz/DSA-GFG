//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n = arr.size();
        bool t[n + 1][sum + 1];  // Dynamic programming table for memoization
        
        // Initialize the dp table (base cases)
        for (int i = 0; i < n + 1; i++) {
            for (int j = 0; j < sum + 1; j++) {
                // If the array is empty, no sum can be formed
                if (i == 0) {
                    t[i][j] = false;
                }
                // If the sum is 0, an empty subset can be formed with any number of elements
                if (j == 0) {
                    t[i][j] = true;
                }
            }
        }

        // Populate the dp table using bottom-up approach
        for (int i = 1; i < n + 1; i++) {
            for (int j = 1; j < sum + 1; j++) {
                // If the current element is less than or equal to the current sum
                if (arr[i - 1] <= j) {
                    // The sum can be formed by including or excluding the current element
                    t[i][j] = (t[i - 1][j - arr[i - 1]] || t[i - 1][j]);
                } else {
                    // If the current element is greater than the current sum, exclude it
                    t[i][j] = t[i - 1][j];
                }
            }
        }

        return t[n][sum];  // Return whether the sum is formed with 'n' elements or not
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends
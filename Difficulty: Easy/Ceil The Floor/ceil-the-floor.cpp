//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        
        // IF SORTED THEN THIS
//         int n=arr.size();
//         // code here
//         int i = -1, j = -1;
// 	 int start = 0; 
// 	 int end = n-1;

// 	 while(start <= end){
// 		int mid = start + (end - start)/2;

// 		if(arr[mid] >= x){
// 			i = arr[mid];
// 			end = mid -1;
// 		}
// 		else {
// 			start = mid + 1;
// 		}
// 	 }

// 	  start = 0; 
// 	 end = n-1;

// 	 while(start <= end){
// 		int mid = start + (end - start)/2;

// 		if(arr[mid] <= x){
// 			j = arr[mid];
// 			start = mid + 1;
// 		}
// 		else {
// 			end = mid -1;
// 		}
// 	 }
// 	 return {j,i};

    int i=INT_MIN;
        int j = INT_MAX;
        for(int k=0; k<arr.size(); k++){
            if(arr[k] >= x && arr[k] <= j){
                j = arr[k];
            }
            
            if(arr[k] <= x && arr[k] >= i){
                i = arr[k];
            }
        }
        
        if(i == INT_MIN){
            i = -1;
        }
        if(j == INT_MAX){
            j = -1;
        }
        return {i,j};
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int start = 0;
        int end = arr.size() -1;
        
        int ans = INT_MAX;
        int index = 0;
        
        while(start <= end){
            int mid = start + (end - start)/2;
           
           if(arr[start] <= arr[mid]){
               if(ans > arr[start]){
                   index = start;
                   ans = arr[start];
               }
               start = mid + 1;
           }
           else {
               if(ans > arr[mid]){
                   index = mid;
                   ans = arr[mid];
               }
               end = mid -1;
           }
        }
        return index;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        Solution ob;
        int res = ob.findKRotation(arr);
        cout << res << endl;
    }
}
// } Driver Code Ends
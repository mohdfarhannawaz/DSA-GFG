//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        // code here.
        int prefix = 0;
        
        int count = 0;
        
        unordered_map<int, int> mpp;
        
        for(int i=0; i<arr.size(); i++){
            prefix += arr[i];
            
            if(prefix == 0){
                count++;
            }
            
            if(mpp.find(prefix) != mpp.end()){
                count += mpp[prefix];
               
            }
             mpp[prefix]++;
        }
        return count;
        
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        cout << ob.findSubarray(arr) << endl;
        cout << "~\n";
    }
}

// } Driver Code Ends
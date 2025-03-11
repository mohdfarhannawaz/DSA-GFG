//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int celebrity(vector<vector<int> >& mat) {
        // code here
        int ans = -1;
        int i = 0;
        int j = mat.size()-1;
        while(i<j){
            if(mat[i][j] == 1){
                i++;
            }
            else{
                j--;
            }
        }
        
        for(int k=0; k<mat.size(); k++){
            if(k == i){
                continue;
            }
            else if(mat[k][i] == 0 || mat[i][k] == 1){
                return -1;
            }
        }
        return i;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > M(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> M[i][j];
            }
        }
        Solution ob;
        cout << ob.celebrity(M) << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends
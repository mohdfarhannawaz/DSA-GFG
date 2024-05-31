//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int Solve(int N, vector<int>& piles, int H) {
        // Code here
        int start = 0;
        int end= 0;
        
        for(int i=0; i<N; i++){
            end = max(end, piles[i]);
            start += piles[i];
        }
        
        start = start/H;
        
        int mid;
        int ans;
        
        while(start <= end){
            
            mid = start + (end - start)/2;
            
            int time = 0;
            for(int i=0; i<N; i++){
                time += piles[i]/mid;
                if(piles[i]%mid){
                    time++;
                }
            }
            
            if(time > H){
                start = mid + 1;
            }
            else {
                end = mid - 1;
                ans = mid;
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
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
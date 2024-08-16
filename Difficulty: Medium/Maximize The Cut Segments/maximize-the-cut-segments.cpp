//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    
    //Function to find the maximum number of cuts.
    int func(int n, int x, int y, int z, vector<int> &arr){
        if(n==0){
            return 0;
        }
        if(arr[n] != -1){
            return arr[n];
        }
        int val1 = INT_MIN;
        int val2 = INT_MIN;
        int val3 = INT_MIN;
        
        if(n>=x){
            val1 = func(n-x,x,y,z,arr);
        }
        if(n>=y){
            val2 = func(n-y,x,y,z,arr);
        }
        if(n>=z){
            val3 = func(n-z,x,y,z,arr);
        }
        arr[n] = 1+max(val1, max(val2,val3));
        return arr[n];
    }
    
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        vector<int>arr(n+1, -1);
        int ans = func(n,x,y,z,arr);
        if(ans<0){
            return 0;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}
// } Driver Code Ends
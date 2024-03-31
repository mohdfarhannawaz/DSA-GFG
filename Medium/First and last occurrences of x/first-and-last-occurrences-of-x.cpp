//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        int start = 0;
        int end = n-1;
        int mid;
        int first = -1, last = -1;
        
        while(start <= end){
            mid = start + (end-start)/2;
            
            if(arr[mid] == x){
                first = mid;
                end = mid-1;
            }
            else if(arr[mid] < x){
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        
        start = 0;
        end = n-1;

        while(start <= end){
            mid = start + (end-start)/2;
            
            if(arr[mid] == x){
                last = mid;
                start = mid + 1;
            }
            else if(arr[mid] < x){
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        vector<int> vec(2);
        vec[0] = first;
        vec[1] = last;
        
        return vec;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends
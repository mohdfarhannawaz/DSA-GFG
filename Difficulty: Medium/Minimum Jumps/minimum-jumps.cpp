//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        
        int i;
        int jmp=0,pos=0,dest=0;
    //  if(arr[0]==0)
    //     return -1;
        if(n<=1) 
          return 0;
        for(i=0;i<n-1;i++){
            dest=max(dest,arr[i]+i);
            if(pos==i)
            {
                pos=dest;
                jmp++;
                if(pos>=n-1){
                    return jmp;
                }
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends
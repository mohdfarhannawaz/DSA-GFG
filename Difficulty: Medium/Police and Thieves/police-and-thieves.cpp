//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function Template for C++

class Solution{
    public:
    int catchThieves(char arr[], int n, int k) 
    {
        // Code here 
        int p = 0;
        int t = 0;
        int ans = 0;
        
        while(p<n && t<n){
            while(p<n && arr[p]!='P'){
                p++;
            }
            while(t<n && arr[t]!='T'){
                t++;
            }
            
            while(p<n && t<n){
                if(abs(p-t) <= k){
                    ans++;
                    p++;
                    
                    while(p<n && arr[p]!='P'){
                        p++;
                    }
                    t++;
                    while(t<n && arr[t]!='T'){
                        t++;
                    }
                }
                else {
                    if(p<t){
                        p++;
                        
                        while(p<n && arr[p]!='P'){
                            p++;
                        }
                    }
                    else{
                        t++;
                        while(t<n && arr[t]!='T'){
                            t++;
                        }
                    }
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n >> k;
		char arr[n];
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
		Solution obj;
		cout<<obj.catchThieves(arr, n, k) << endl;
	
cout << "~" << "\n";
}
	return 0; 
} 


// } Driver Code Ends
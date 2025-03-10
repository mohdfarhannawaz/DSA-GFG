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
        int police = 0;
        int thief = 0;
        int distance = 0;
        
        while(police < n && thief < n){
            while(police<n && arr[police]!='P'){
                police++;
            }
            while(thief<n && arr[thief]!='T'){
                thief++;
            }
            
            while(thief<n && police<n){
                if(abs(police - thief) <= k){
                    distance++;
                    police++;
                    while(police<n && arr[police] != 'P'){
                        police++;
                    }
                    thief++;
                    while(thief<n && arr[thief]!='T'){
                        thief++;
                    }
                }
                else{
                    if(police < thief){
                        police++;
                        while(police<n && arr[police] != 'P'){
                            police++;
                        }
                    }
                    else{
                        thief++;
                        while(thief<n && arr[thief]!='T'){
                            thief++;
                        }
                    }
                }
                
            }
        }
        return distance;
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
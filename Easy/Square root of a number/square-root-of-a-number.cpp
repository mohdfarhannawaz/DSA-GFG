//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here  
        long long int start = 1;
        long long int end = x;
        long long int mid;
        long long int index = -1 ;
        
        while(start <= end) {
            
            mid = start + (end - start)/2;
            
            if(mid * mid == x){
                return mid;
            }
            else if(mid * mid < x){
                index = mid;
                start = mid + 1 ;
            }
            
            else {
                end = mid - 1;
                
            }
        }
        return index;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends
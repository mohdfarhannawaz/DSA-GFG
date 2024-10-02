//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    long long int substrCount (string s, int k) {
    	//code here.
    	return countString(s, k) - countString(s, k-1);
    }
    
    int countString(string s, int k){
        int low = 0;
        int high = 0;
        int n = s.size();
        int dist = 0;
        int arr[26] = {0};
        long ans = 0;
        
        while(high < n){
            arr[s[high] - 'a']++;
            
            if(arr[s[high] - 'a'] == 1){
                dist++;
            }
            
            while(dist > k){
                arr[s[low] - 'a']--;
                
                if(arr[s[low] - 'a'] == 0){
                    dist--;
                }
                low++;
            }
            ans += (high - low) + 1;
            high++;
        }
        return ans;
    }
};

//{ Driver Code Starts.


int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int k; cin >> k;
		Solution ob;
		cout <<ob.substrCount (s, k) << endl;
	}
}
// } Driver Code Ends
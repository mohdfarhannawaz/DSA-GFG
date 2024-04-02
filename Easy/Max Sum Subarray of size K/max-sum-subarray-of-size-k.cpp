//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        long int maxsum = 0;
        long int winsum = 0;
        
        if(N<K){
            return -1;
        }
        
        for(int i=0; i<K; i++){
            winsum += Arr[i];
        }
        
        maxsum = winsum ;
        
        for(int i=K; i<N; i++){
            winsum = winsum + Arr[i];
            winsum = winsum - Arr[i-K];
            if(winsum > maxsum){
                maxsum = winsum;
            }
        }
        return maxsum;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
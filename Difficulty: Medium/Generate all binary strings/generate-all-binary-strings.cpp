//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function Template for C++

class Solution{
public:
    vector<string>ans;
    
    void helper(int i, int n, string str){
        if(i==n){
            int num = stoi(str,nullptr,2);
            ans.push_back(str);
            return;
        }
        helper(i+1,n,str+"0");
        
        if(str=="" || str.back() != '1')
            helper(i+1,n,str+"1");
    }
    
    
    vector<string> generateBinaryStrings(int num){
        //Write your code
        helper(0,num,"");
        return ans;
    }
};


//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        
        vector<string> v = obj.generateBinaryStrings(n);
        for(auto it:v) cout<<it<<" ";
        cout << endl;
    
cout << "~" << "\n";
}

    return 0;
}

// } Driver Code Ends
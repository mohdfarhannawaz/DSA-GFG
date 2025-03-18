//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function Template for C++

class Solution{
public:

    void helper(stack<int>& St, int ele){
        if(St.size() == 0)    {
            St.push(ele);
        }
        
        else{
            int rem = St.top();
            St.pop();
            helper(St, ele);
            St.push(rem);
        }
    }
    
    void Reverse(stack<int> &St){
        if(St.size() == 0){
            return;
        }
        
        int temp = St.top();
        St.pop();
        Reverse(St);
        helper(St, temp);
    }
};


//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends
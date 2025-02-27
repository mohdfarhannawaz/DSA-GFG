//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
     void dfs(int node, vector<int> adjls[], int visited[]){
        visited[node] = 1;
        
        for(auto it : adjls[node]){
            if(!visited[it]){
                dfs(it, adjls, visited);
            }
        }
    }
    
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        
        vector<int> adjls [V];
        
        for(int i=0; i<V; i++){
            for(int j=0; j<V; j++){
                if(adj[i][j] == 1 && i!=j){
                    adjls[i].push_back(i);  
                    adjls[j].push_back(i);
                }
            }
        }
        
        int visited[V] = {0};
        int count = 0;
        
        for(int i=0; i<V; i++){
            if(!visited[i]){
                count++;
                dfs(i, adjls, visited);
            }
            
        }
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends
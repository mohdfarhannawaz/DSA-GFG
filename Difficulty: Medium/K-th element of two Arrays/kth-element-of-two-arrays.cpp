//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        // code here
        int left = 0;
        int right = 0;
        int count = 0;
        int ele = -1;
        
        int n1 = arr1.size();
        int n2 = arr2.size();
        
        while(left < n1 && right < n2){
            
            if(arr1[left] < arr2[right]){
                
                
                count++;
                if(count == k){
                   return arr1[left];
                }
                left++;
            }
            else {
               
                
                count++;
                 if(count == k){
                    return arr2[right];
                }
                right++;
                
            }
        }
        
        while(left < n1){
            
            count++;
            if(count == k){
                   return arr1[left];
            }
            left++;
        }
        
        while(right < n2){
            
                count++;
                if(count == k){
                   return arr2[right];
                }
                right++;
        }
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> arr1, arr2;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr1.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            arr2.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(k, arr1, arr2) << endl;
    }
    return 0;
}
// } Driver Code Ends
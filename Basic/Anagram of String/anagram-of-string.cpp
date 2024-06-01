//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
// Your code goes here
    unordered_map<char, int> n1;
    
    
    
    for(char c: str1){
        n1[c]++;
    }
    
    for(char c: str2){
        n1[c]--;
    }
    int ans = 0;
    for(auto it: n1){
        if(it.second != 0){
            ans += abs(it.second);
        }
    }
    return ans;

}
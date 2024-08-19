//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int low = l;
         int high = m+1;
         
         vector<int>temp;
         
        while(low<=m && high<=r){
            if(arr[low] < arr[high]){
                temp.push_back(arr[low]);
                low++;
            }
            else{
                temp.push_back(arr[high]);
                high++;
            }
        }
        
        while(low<=m) {
            temp.push_back(arr[low]);
            low++;
        }
        
        while(high<=r){
            temp.push_back(arr[high]);
            high++;
        }
        
        for(int i=l; i<=r; i++){
            arr[i] = temp[i-l];
        }
        
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        int m = (l+r)/2;
        if(l>=r){
            return;
        }
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends
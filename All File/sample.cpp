#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int arr[], int N) 
    { 
       
        // Your code here
        int res=0,max1=0;
            int diff;
            
        for(int i=0;i<N;i++){
           
            if(arr[i+1]>arr[res]){
                diff=(i+1)-res;
                max1=max(diff,max1);
                
            }
            else if(arr[i+1]<arr[res]){
                res=0;
            }
            else if((i+1)==(N-1)){
                    res=res+1;
                }
            
        }
        return max1;
    }
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int num){
        
        if(num ==0) return 0;
        int mN=INT_MIN,mC = INT_MIN;
        int __=INT_MAX,minCircular=INT_MAX;
        int totalSum=0;
        int currMax=0,currMin=0;
        
        for(int i=0;i<num;i++)
        {
            currMax=max(currMax+arr[i] , arr[i]);
            mN=max(currMax,mN);
            
            currMin=min(currMin + arr[i] , arr[i]);
            __ = min(__ , currMin);
            
            totalSum += arr[i];
        }
        if(mN<0) return mN;
        mC = totalSum - __;
        return max(mN,mC);
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
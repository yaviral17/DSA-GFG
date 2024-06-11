//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    
    vector<int> subarraySum(vector<int> arr, int n, long long s)
    {
        int sum = arr[0];

        for(int start=0,end=0; (start<=end) && (end<n);){
            if(sum<s){
                end++;
                // cout<<"curr sum : "<<sum<<" adding "<<arr[end]<<endl;
                sum+=arr[end];
                
            }
            else if(sum>s){
                if(start==end){
                    start++;
                    end++;
                    // cout<<start<<"  "<<end<<"--\t"<<sum<<"="<<arr[start]<<endl;
                    sum = arr[start];
                    continue;
                }
                // cout<<"curr sum : "<<sum<<" removing "<<arr[start]<<"\t"<<start<<" "<<end<<endl;
                sum-=arr[start];
                start++;
            }else{
                // cout<<"ended with solution found {"<<start<<","<<end<<"}"<<endl;
                return {start+1,end+1};
            }
        }
        return {-1};}
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends
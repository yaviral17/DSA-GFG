//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int> arr, int n, long long s)
    {
        // Your code here
        // start and end
        int st=0,e=0;
        int sum =arr[0];
        // cout<<(st<=e)<<endl;
        while(st<n){
            // cout<<"s : "<<st<<"\t"<<"e : "<<e<<endl;
            if(sum<s){
                
                sum+=arr[++e];
                continue;
            
            }
            if(sum==s){
                return {st,e};
            }
            if(sum>s){
                st++;
                e = st;
                sum =0+arr[s];
            }

        }
        return {-1};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long s;
        cin >> n >> s;
        vector<int> arr(n);
        // int arr[n];
        const int mx = 1e9;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> res;
        res = ob.subarraySum(arr, n, s);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
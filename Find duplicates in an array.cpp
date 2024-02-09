//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> duplicates(long long arr[], int n)
    {
        // code here
        sort(arr, arr + n);
        set<long long> s(arr, arr + n);
       

        for(long long i : s){
            // cout<<i<<"-- set"<<endl;
        }
        vector<int> ans;
        for(long long i : s){
            // cout<<count(arr,arr+n,i)<<" count"<<endl;
            if(count(arr,arr+n,i)>1){
                // cout<< "hi"<<i<<endl;
                ans.push_back((int) i);
            }
        }
        if(!ans.size()){
            return {-1};
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
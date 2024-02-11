//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // arr: input array
    // n: size of array
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n)
    {

        // Your code here
        
        vector<int> ans = {accumulate(arr, arr + n, 0)};
        int s=0;

        for (int i = s+1; i < n; i++)
        {
            cout<<s<<"--"<<i<<endl;
            int summ = accumulate(arr+s, arr + i, 0);
            cout<<summ<<endl;
            ans.push_back(summ);
            summ=0;
            if((s!=n-1) && (i == n-1)){
                i=++s;
            }
            
        }
        return *max_element(ans.begin(), ans.end());
    }
};

//{ Driver Code Starts.

int main()
{
    int t, n;

    cin >> t;   // input testcases
    while (t--) // while testcases exist
    {

        cin >> n; // input size of array

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i]; // inputting elements of array

        Solution ob;

        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends
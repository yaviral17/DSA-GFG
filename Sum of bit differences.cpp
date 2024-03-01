//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int countBits(unsigned int number)
    {

        // log function in base 2
        // take only integer part
        string binary = bitset<64>(number).to_string();

        // returning the length of the binary string
        return 64 - binary.find('1');
    }

    long long sumBitDifferences(int arr[], int n)
    {
        // code here
        cout << countBits(2) << endl;
        return 0;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sumBitDifferences(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
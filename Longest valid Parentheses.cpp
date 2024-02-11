//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int maxLength(string s)
    {
        // code here
        vector<char> p = {s[0]};
        long long c = 0;
        vector<int> count = {};
        for (char i : s)
        {
            // cout<<i<<endl;

            if (p.back() == '(' && i == ')')
            {
                c+=2;
                p.pop_back();
                continue;
            }
            
            if(p.back() == i){
                count.push_back(c);
                c=0;
            }
            
            p.push_back(i);
        }
        return *max_element(p.begin(), p.end());
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.maxLength(S) << "\n";
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<string> AllPossibleStrings(string s)
    {
        vector<string> res;
        int n = s.length();
        unsigned int psize = pow(2, s.length());
        for (int i = 1; i < psize; i++)
        {
            string subset;
            for (int j = 0; j < s.length(); j++)
            {
                if (i & (1 << j))
                {
                    subset += s[j];
                }
            }
            res.push_back(subset);
        }
        sort(res.begin(), res.end());
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        Solution ob;
        vector<string> res = ob.AllPossibleStrings(s);
        for (auto i : res)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
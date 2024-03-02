//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int firstElementKTime(int n, int k, int a[])
    {
        set<int> s;
        map<int, int> ans;
        for (int i = 0; i < n; i++)
        {
            int initialSize = s.size();
            // cout<<i<<"    is :"  << initialSize<<"  element ->"<<a[i]<<endl ;
            s.insert(a[i]);
            // cout<<i<<"    as :"  << s.size()<<endl;
            if (initialSize == s.size())
            {
                ans[a[i]] += 1;
                if (ans[a[i]] >= k)
                {
                    return a[i];
                }
            }else{
                ans[a[i]] =1;
            }
            
            // cout<<endl;

            // printMap(ans);
        }
        return -1;   
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout<<ob.firstElementKTime(n, k, a)<<endl;
	}
	
	return 0;
}
// } Driver Code Ends
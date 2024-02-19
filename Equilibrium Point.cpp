//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the aay.
    // a: input aay
    // n: size of aay
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        if(n==1) return a[0];
        int total = accumulate(a,a+n,total);
        int sum = 0;
        for(int i =0;i<n;i++){
            
            // cout<<sum<<"---"<<total<<"---"<<total-sum-a[i]<<endl;
            if(sum == (total - sum-a[i]) ){
                return a[i-1];
            }
            sum += a[i];
        }
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the aay
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends
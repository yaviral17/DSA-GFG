//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{

public:
    int absoluteDiff(int a, int b)
    {
        return (a > b) ? a - b : b - a;
    }
    int minDifference(int arr[], int n)
    {
        sort(arr, arr + n, greater<int>());
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (!sum1)
            {
                // cout<<"sum1    "<<sum1<<" + "<<arr[i] <<"  = "<<sum1+arr[i]<<endl;
                sum1 += arr[i];
                continue;
            }
            // cout<<absoluteDiff(sum1+arr[i],sum2)<<"---"<<absoluteDiff(sum2+arr[i],sum1)<<endl;
            if(absoluteDiff(sum1+arr[i],sum2)>=absoluteDiff(sum1,sum2+arr[i])){
                // cout<<"sum2    "<<sum2<<" + "<<arr[i] <<"  = "<<sum2+arr[i]<<endl;
                sum2+=arr[i];
            }else{
                // cout<<"sum1    "<<sum1<<" + "<<arr[i] <<"  = "<<sum1+arr[i]<<endl;
                sum1+=arr[i];
            }
        }

        // cout<< "sum1   = "<<sum1<<endl<<"sum2   = "<<sum2<<endl;
        return absoluteDiff(sum1,sum2);
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
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        Solution ob;
        cout << ob.minDifference(a, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends
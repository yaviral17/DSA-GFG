//{ Driver Code Starts
#include <bits/stdc++.h>
#include <algorithm> 
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to merge the arrays.
    void merge(long long arr1[], long long arr2[], int n, int m)
    {
        // int arr[n + m];
        vector<int> v(arr1,arr1+n);
        for(int i=0;i<m;i++){   
            v.push_back(arr2[i]);
        }
        // for(int i =0 ;i<v.size();i++){
        //     cout<<"vector "<<i<<" ==  "<<v[i]<<endl;
        // }
        sort(v.begin(),v.end());
        // cout<<(n+m)<<"  "<<endl;
        for(int i =0;i<(n+m);i++){
            if(i <n){
                // cout<<"--i 1   "<<i<<endl;
                arr1[i]=v[i];
                // cout<<arr1[i]<<"="<<v[i]<<endl;
               
            }else{
                // cout<<"--i 2   "<<i-n<<endl;
                arr2[i-n] = v[i];
                // cout<<arr2[i-n]<<"="<<v[i]<<endl;
            }
        }
    }
};

//{ Driver Code Starts.

int main()
{

    int T;
    cin >> T;

    while (T--)
    {
        int n, m;
        cin >> n >> m;

        long long arr1[n], arr2[m];

        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);

        for (int i = 0; i < n; i++)
            cout << arr1[i] << " ";

        for (int i = 0; i < m; i++)
            cout << arr2[i] << " ";

        cout << endl;
    }

    return 0;
}

// } Driver Code Ends
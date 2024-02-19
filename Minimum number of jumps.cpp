//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution
{
public:
    int minJumps(int arr[], int n)
    {
        // Your code here
        int jump = 0;
        for (int i = 0; i < n; i++)
        {
            
            if(arr[i]==0){
                // cout << "current 0 \nCan't move forward";

                return -1;
            }
            if (arr[i] == 1)
            {
                // cout << "current 1 \nNext jump to :" << arr[i + 1] << endl;

                jump++;
                continue;
            }
            if ((i + arr[i]) >= (n))
            {
                // jump++;
                break;
            }
            int nextJumpToIndex = i + distance(arr+i, max_element(arr + i + 1, arr + i + arr[i]+1));
            
            // cout << "range : " << arr[i + 1] << "    " << arr[i + arr[i]] << endl;
            // cout << "Next jump to :" << arr[nextJumpToIndex] <<"    index is :" << nextJumpToIndex<<endl;
            
            i = nextJumpToIndex-1;
            if ((i+1)<n)
            {
                jump++;
            }
            
        }
        return jump;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.minJumps(arr, n) << endl;
    }
    return 0;
}

// } Driver Code Ends
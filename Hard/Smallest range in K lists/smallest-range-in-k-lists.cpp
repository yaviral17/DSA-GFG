//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define N 1000


// } Driver Code Ends
// you are required to complete this function 
// function should print the required range
class Solution{
    public:
    pair<int,int> findSmallestRange(int KSortedArray[][N], int n, int k)
    {
        
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> minHeap;
        int minRange = INT_MAX;
        int minStart = 0, minEnd = INT_MAX;
        int maxValue = INT_MIN;
        int minValue = INT_MAX;


        for (int i = 0; i < k; i++) {
            minHeap.push({KSortedArray[i][0], {i, 0}});
           
            maxValue = max(maxValue, KSortedArray[i][0]);
        }

        while (true) {
            auto current = minHeap.top();
            minHeap.pop();
            int listIndex = current.second.first;
            int elementIndex = current.second.second;
            minValue = current.first;
            if (maxValue - minValue < minRange) {
                minRange = maxValue - minValue;
                minStart = minValue;
                minEnd = maxValue;
            }
            if (elementIndex == n - 1)
                break;
            minHeap.push({KSortedArray[listIndex][elementIndex + 1], {listIndex, elementIndex + 1}});
           
            maxValue = max(maxValue, KSortedArray[listIndex][elementIndex + 1]);
        }

        return {minStart, minEnd};
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int arr[N][N];
        pair<int,int> rangee;
        for(int i=0; i<k; i++)
            for(int j=0; j<n; j++)
                cin>>arr[i][j];
        Solution obj;
	    rangee = obj.findSmallestRange(arr, n, k);
	    cout<<rangee.first<<" "<<rangee.second<<"\n";
    }   
	return 0;
}


// } Driver Code Ends
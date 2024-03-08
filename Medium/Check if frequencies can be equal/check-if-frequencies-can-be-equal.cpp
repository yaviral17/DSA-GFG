//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    int n=s.size();
    vector<int> v(26,0);
    for(int i=0;i<n;i++){
        v[s[i]-'a']++;
    }
    unordered_map<int,int> mp;
    for(auto e:v){
        if(e!=0){
            mp[e]++;
        }
    }
    if(mp.size()>2)
    return 0;
    if(mp.size()==1)
    return 1;
    int mini=INT_MAX,maxi=INT_MIN;
    for(auto e: mp){
        mini=min(e.first,mini);
        maxi=max(e.first,maxi);
    }
    if((mini==1 && mp[mini]==1) || (maxi-mini==1 && mp[maxi]==1))
        return 1;     
    return 0;
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends
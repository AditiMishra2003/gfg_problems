//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        //unorderd map to store the prefixsum and index
        unordered_map<int,int> mp;
        int prefixsum=0;
        int maxi=0;
        for(int i=0;i<N;i++){
            prefixsum=prefixsum+A[i];
            if(prefixsum==K){
                maxi=max(maxi,i+1);
            }
        
            if(mp.find(prefixsum-K)!=mp.end()){
                    maxi=max(maxi,i-mp[prefixsum-K]);
            }
            if(mp.find(prefixsum)==mp.end()){
                mp[prefixsum]=i;
            }
            
        }
        return maxi;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
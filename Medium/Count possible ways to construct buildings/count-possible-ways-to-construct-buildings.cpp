//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	long mod=1000000007;
	int TotalWays(int N)
	{
	    // Code here
	    long a=1;
	    long b=1;
	    long c=0;
	    for(int i=1;i<=N;i++){
	        c=(a%mod+b%mod)%mod;
	        a=b%mod;
	        b=c%mod;
	    }
	    return (int)((c*c)%mod);
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
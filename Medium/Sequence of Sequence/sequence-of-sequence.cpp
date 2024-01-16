//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int help(int i,int j,int m,int n){
        if(j==n){
            return 1;
        }
        if(i>m){
            return 0;
        }
        int pick=help(2*i,j+1,m,n);
        int notpick=help(i+1,j,m,n);
        return pick+notpick;
    }
    int numberSequence(int m, int n){
        // code here
        return help(1,0,m,n);
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int m, n;
        cin>>m>>n;
        
        Solution ob;
        cout<<ob.numberSequence(m, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends
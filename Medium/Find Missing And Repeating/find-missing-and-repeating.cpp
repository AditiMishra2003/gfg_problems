//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        long long len=arr.size();
        vector<int> ans;
        long long S1=(len*(len+1))/2;
        long long S2=(len*(len+1)*(2*len+1))/6;
        long long s1=0;
        long s2=0;
        for(int i=0;i<len;i++){
            s1+=arr[i];
            s2+=(long long)arr[i]*(long long)arr[i];
        }
        long long val1=s1-S1;
        long long val2=s2-S2;
        val2=val2/val1;
        long long missing=(val1+val2)/2;
        long long repeating=missing-val1;
        ans.push_back(missing);
        ans.push_back(repeating);
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
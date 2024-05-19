//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        vector<int> ans;
        int len=arr.size();
        int n1=n+1;
        vector<int> v(n1,0);
        for(int i=0;i<len;i++){
            v[arr[i]]++;
        }
        int missing=-1;
        int repeating=-1;
        for(int i=1;i<=n1;i++){
            if(v[i]==0)missing=i;
            else if(v[i]==2)repeating=i;
            if(repeating!=-1&&missing!=-1){
                break;
            }
        }
        
        ans.push_back(repeating);
        ans.push_back(missing);
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
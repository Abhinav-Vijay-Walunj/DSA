// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        if(N == 0)
        {
            return -1;
        }
        int pos=1;
        while(N>1)
        {
            if(N%2 != 0)
            {
                return -1;
            }
            N=N/2;
            pos++;
        }
        return pos;
        // code here
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
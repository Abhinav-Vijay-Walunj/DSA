// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    int fact(int n)
{
    if (n < 0) // Negative Number Edge Case
        return -1;
 
    // Initialize result
    int count = 0;
 
    // Keep dividing n by powers of
    // 5 and update count
    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;
 
    return count;
}
        int findNum(int n)
        {
            int ans=0;
            int s=0,e=5*n,mid,t1;
            while(s <= e)
            {
                mid=(e+s)/2;
                t1=fact(mid);
                
                if(n <= t1)
                {
                    e=mid-1;
                    ans=mid;
                }
                else
                {
                    s=mid+1;
                }
                //ans = min(ans,mid);
                //temp = n-1;
                
                
            }
            //int t=mid%5;
            // if(fact(mid-t) == n )
            // {
            //     return mid-t;
            // }
            // else
            // {
            //     return (mid+5-t);
            
            // }
            //int t=mid%5;
            return ans;
            
            
        //complete the function here
        }
};

// { Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}  // } Driver Code Ends
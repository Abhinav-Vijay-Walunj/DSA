// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int isPossible(long long S, long long N, long long X, long long A[])
    {
        vector<long long> cash;
        bool flag = true;
        long long c, prevsum, p;
        c = S; prevsum = S;
        cash.push_back(S);
        for(long long i = 0;i < N;i++){
            c = prevsum + A[i];
            if(c > X)
                flag=false;
            if(flag)
                cash.push_back(c);
            prevsum = c + prevsum;
        }
        flag = true;
        p = lower_bound (cash.begin(), cash.end(), X) - cash.begin();
        while(X > 0LL){
            if(p < cash.size() && X == cash[p]){
                X = 0;
                break;
            }
            if(p == 0 && cash[p] != X)
                break;
            if(X >= cash[p-1])
                X -= cash[p-1];
            p--;
        }
        if(X == 0LL)
            return 1;
        return 0;
        // code here
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long S, N, X;
        cin>>S>>N>>X;
        long long A[N];
        for(long long i = 0;i < N;i++)
            cin>>A[i];
        
        Solution ob;
        if(ob.isPossible(S, N, X, A))
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}  // } Driver Code Ends
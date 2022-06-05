// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long buzzTime(long N, long M, long L, long H[], long A[])
    {
        long l = 0, r = 0, mid, sum = 0;
        long x = max(M, L);
        for(int i = 0;i < N;i++){
	        if((x - H[i])%A[i] == 0)
	            r = max(r, (x - H[i])/A[i]);
	        else
	            r = max(r, (x - H[i])/A[i] + 1);
	    }
	    while(l <= r){
	        mid = (l + r)/2;
	        sum = 0;
	        for(int i = 0;i < N;i++)
	            if((H[i] + A[i]*mid) >= L)
	                sum += (H[i] + A[i]*mid);
            if(sum >= M)
	            r = mid-1;
	        else
	            l = mid+1;
	    }
	    return l;
        // code here
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long N, M, L;
        cin>>N>>M>>L;
        long H[N], A[N];
        for(long i = 0;i < N;i++) 
            cin>>H[i]>>A[i];
        
        Solution ob;
        cout<<ob.buzzTime(N, M, L, H, A)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    int findRoot(int i, int par[], int rank1[]) 
    {
        //iterating to find the node whose par[i] is equal to i.
        while(i!=par[i]) {
            i = par[i];
        }
        return i;
    }
    //Function to merge two nodes a and b.
    void union_( int a, int b, int par[], int rank1[]) 
    {
        //find root of nodes a and b.
        int x = findRoot(a, par, rank1);
        int y = findRoot(b, par, rank1);
        
        //base case if they are already in same set.
        if(x==y) {
            return;
        }
        
        //checking for rank, and putting in set with higher rank.
        if(rank1[x]>=rank1[y]) {
            rank1[x]++;
            par[y] = par[x];
        } else {
            rank1[y]++;
            par[x] = par[y];
        }
        return;
        //code here
    }
    
    //Function to check whether 2 nodes are connected or not.
    bool isConnected(int x,int y, int par[], int rank1[])
    {
        //if root of both nodes is same then they are connected.
        return (findRoot(x, par, rank1) == findRoot(y, par, rank1));
        //code here
    }
};

// { Driver Code Starts.

int main() {
    //taking number of testcases
    int t;
    cin>>t;
    while(t--) {
        
        //taking number of elements
        int n;
        cin>>n;
        
        
        int par[n+1];
        int rank1[n+1];

        //initializing the parent and
        //the rank array
        for(int i=1; i<=n; i++) {
            par[i] = i;
            rank1[i] = 1;
    }
    
    //taking number of queries
    Solution obj;
    int q;
    cin>>q;
    while(q--) {    
        int a,b;
        char c;
        cin>>c>>a>>b;
        
        //if query type is 'U'
        //then calling union_ method
        if(c=='U')
        {
            obj.union_(a,b, par, rank1);
        }
        else//else calling isConnected() method
        cout<<obj.isConnected(a,b, par, rank1)<<endl;
    }
    }
    return 0;
}
  // } Driver Code Ends
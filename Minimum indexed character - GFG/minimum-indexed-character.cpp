// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        int ans=-1;
        set<int> s;
        set<int>::iterator it;
        for(int i=0;i<patt.size();i++)
        {
            s.insert(patt[i]);
        }
        int n=s.size();
        for(int i=0;i<str.size();i++)
        {
            s.insert(str[i]);
            if(s.size() != n+1)
            {
                return i;
            }
            // it=s.end();
            // --it;
            s.erase(str[i]);
        }
        return ans;
        // Your code here
    }
};

// { Driver Code Starts.

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}
  // } Driver Code Ends
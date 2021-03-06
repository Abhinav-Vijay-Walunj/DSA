// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        int n=S.size();
        string ans="";
        // to store ans
        for(int i=S.size()-1;i >= 0;i--)
        {
            string t="";
            while(S[i] != '.' && i >= 0)
            {
                t.push_back(S[i]);
                i--;
            }
            
            reverse(t.begin(),t.end());
            if(S[i] == '.')
                t.push_back('.');
            ans+=t;
            // ans+='.';
            
        }
        
        return ans;
        // traversing from end when i hit '.' i stop adding it into temp and then reverse temp and add '.' if it was present at s[i] insert it into main ans and
        // return it.
        // code here 
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends
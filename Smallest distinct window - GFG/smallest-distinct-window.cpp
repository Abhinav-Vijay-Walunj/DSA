// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    const int nchar=256;
    int findSubString(string str)
    {
        int n=str.size();
        string pat="";
        
        set<char> s;
        
        for(int i=0;i<n;i++)
        {
            s.insert(str[i]);
        }
        for(auto i=s.begin();i != s.end();i++)
        {
            pat+=(*i);
        }
        int m=pat.size();
        
        if(n<m)
        {
            return 0;
        }
        
        int h_pat[nchar]={0};
        int h_str[nchar]={0};
        
        for(int i=0;i<m;i++)
        {
            h_pat[pat[i]]++;
        }
        
        int st=0,stind=-1,min_len=INT_MAX;
        
        int cnt=0;
        
        for(int j=0;j<n;j++)
        {
            h_str[str[j]]++;
            
            if(h_pat[str[j]] != 0 && h_str[str[j]] <= h_pat[str[j]])
                cnt++;
            if(cnt == m)
            {
                while(h_str[str[st]] > h_pat[str[st]] || h_pat[str[st]] == 0)
                {
                    if(h_str[str[st]] >h_pat[str[st]])
                    {
                        h_str[str[st]]--;
                    }
                    st++;
                }
            
            int len_window=j-st+1;
            
            if(min_len >len_window)
            {
                min_len = len_window;
                stind=st;
            }
            }
        }
        if(stind == -1)
        {
            return 0;
        }
        return str.substr(stind,min_len).size();
        
        // Your code goes here   
    }
};

// { Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}  // } Driver Code Ends
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	void computeLPSArray(string str, int M, int lps[])
	{
	    int len = 0; //lenght of the previous longest prefix suffix
	    int i;
	    
	    lps[0] = 0; //lps[0] is always 0
	    i = 1;
	    
	    // the loop calculates lps[i] for i = 1 to M-1
	    while (i < M)
	    {
	        if (str[i] == str[len])
	        {
	            len++;
	            lps[i] = len;
	            i++;
	        }
	        else // (pat[i] != pat[len])
	        {
	            if (len != 0)
	            {
	                // This is tricky. Consider the example AAACAAAA
	                // and i = 7.
	                len = lps[len-1];
	                
	                // Also, note that we do not increment i here
	            }
	            else // if (len == 0)
	            {
	                lps[i] = 0;
	                i++;
	            }
	        }
	    }
	}

	int isRepeat(string str)
	{
	    int n = str.size();
	    int lps[n];
	    computeLPSArray(str, n, lps);
	    int len = lps[n-1];
	    return (len > 0 && n%(n-len) == 0)? 1: 0;
	    // Your code goes here
	    
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;
        Solution ob;
   		cout << ob.isRepeat(str) << "\n";
   	}

    return 0;
}  // } Driver Code Ends
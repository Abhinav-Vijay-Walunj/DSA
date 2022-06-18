// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        int n=str1.size(),m=str2.size();
        if(m != n || m<2)
        {
            return false;
        }
        
        string c="";
        string ac="";
        
        ac=ac+str2.substr(m-2,2)+str2.substr(0,m-2);
        
        c=c+str2.substr(2)+str2.substr(0,2);
        return (str1.compare(c) == 0 || str1.compare(ac) == 0);
        // Your code here
    }

};


// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}
  // } Driver Code Ends
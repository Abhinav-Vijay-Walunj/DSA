// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        
        vector<long long> ans;
        
        stack<long long> s;
        ans.push_back(-1);
        s.push(arr[n-1]);
        for(int i=n-2;i >= 0;i--)
        {
            if(s.size() == 0)
            {
                ans.push_back(-1);
            }
            else if(s.size()>0 && s.top()>arr[i])
            {
                ans.push_back(s.top());
                s.push(arr[i]);
            }
            else if(s.size()>0 && s.top() <= arr[i])
            {
                while(s.size()>0 && s.top()<=arr[i])
                {
                    s.pop();
                }
                
                if(s.size() == 0)
                {
                    ans.push_back(-1);
                }
                else
                {
                    ans.push_back(s.top());
                }
                s.push(arr[i]);
            }   
        
        }
        reverse(ans.begin(),ans.end());
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
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        vector<int> v;
        map<int, int> m;
        int n=nums.size();
    for (int i = 0; i < n; i++) {
        m[nums[i]]++;
    }
 
    /*Traverse through the map and check if its second
      element that is the frequency is 1 or not. If this is
      1 than it is the non-repeating element print it.It is
      clearly mentioned in problem that all numbers except
      two are repeated once. So they will be printed*/
 
    // cout << "The non-repeating elements are ";
    for (auto& x : m) {
        if (x.second == 1) {
            v.push_back(x.first);
        }
    }
    
    return v;
    /*
        set<int> s;
        s.insert(nums[0]);
    for (int i = 1; i < nums.size(); i++)
    {
        /*Iterate through the array and check if each
        element is present or not in the set. If the
        element is present, remove it from the array
        otherwise add it to the set
        if (s.find(nums[i]) != s.end())
            s.erase(nums[i]);
        else
            s.insert(nums[i]);
    }
    for(auto it:s)
    {
        v.push_back(it);
    }
    
        
        vector<int> v;
        int ans=nums[0];
        int set_bit,i;
        int *x=0,*y=0;
        
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            ans=ans^nums[i];
        }
        // rightmost set bit
        set_bit=ans&(~(ans-1));
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]&set_bit)
            {
                *x=*x^nums[i];
            }
            else
            {
                *y=*y^nums[i];
            }
        }
        v.push_back(*x);
        v.push_back(*y);
        return v;*/
        // Code here.
    }
    

    
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int arr[], int n, int k)
    {
        vector<int> ans;
        // Creates an empty hashmap hm
    unordered_map<int, int> hm;

    // initialize distinct element count for current window
    int dist_count = 0;

    // Traverse the first window and store count
    // of every element in hash map
    for (int i = 0; i < k; i++) {
        if (hm[arr[i]] == 0) {
            dist_count++;
        }
        hm[arr[i]] += 1;
    }

    // Print count of first window
    ans.push_back(dist_count);

    // Traverse through the remaining array
    for (int i = k; i < n; i++) {
        // Remove first element of previous window
        // If there was only one occurrence, then reduce distinct count.
        if (hm[arr[i - k]] == 1) {
            dist_count--;
        }
        // reduce count of the removed element
        hm[arr[i - k]] -= 1;

        // Add new element of current window
        // If this element appears first time,
        // increment distinct element count

        if (hm[arr[i]] == 0) {
            dist_count++;
        }
        hm[arr[i]] += 1;

        // Print count of current window
        ans.push_back(dist_count);
    }
    return ans;
        /*
        unordered_map<int,int> s;
        for(int i=0;i<k;i++)
        {
            s.insert(make_pair(A[i])++);
        }
        ans.push_back(s.size());
        for(int i=k;i<n-k+1;i++)
        {
            
        }*/
        //code here.
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
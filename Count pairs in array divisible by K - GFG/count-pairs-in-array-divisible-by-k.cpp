// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    typedef long long ll;
    long long countKdivPairs(int A[], int n, int K)
    {
        ll freq[K] = { 0 };
    
    	// Count occurrences of all remainders
    	for (int i = 0; i < n; i++)
    		++freq[A[i] % K];
    
    	// If both pairs are divisible by 'K'
    	ll sum = freq[0] * (freq[0] - 1) / 2;
    
    	// count for all i and (k-i)
    	// freq pairs
    	for (int i = 1; i <= K / 2 && i != (K - i); i++)
    		sum += freq[i] * freq[K - i];
    	// If K is even
    	if (K % 2 == 0)
    		sum += (freq[K / 2] * (freq[K / 2] - 1) / 2);
    	return sum;
    	/*
        for(int i=0;i<n;i++)
        {
            A[i]=A[i]%K;
        }
        int ans=0;
        
        sort(A,A+n);*/
        
        //code here
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];

		int k;
		cin >> k;

        Solution ob;
		cout << ob. countKdivPairs(a, n , k) << "\n";



	}


	return 0;
}
  // } Driver Code Ends
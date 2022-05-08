class Solution {
public:
    bool isPalindrome(string s) {
        string res="";
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]>64 && s[i]<91)
            {
                res+=s[i]+32;
            }
            else if(s[i]>96 && s[i]<123)
                               {
                                   res+=s[i];
                               }
            else if(s[i]>47 && s[i]<58)
            {
                res+=s[i];
            }
        }
        cout<<res;
        int i=0,j=res.size()-1;
        // if(j == 0 && n!=1)
        // {
        //     return false;
        // }
        // else if(j == 0 && n==1)
        // {
        //     return true;
        // }
        while(i<j)
        {
            if(res[i] != res[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
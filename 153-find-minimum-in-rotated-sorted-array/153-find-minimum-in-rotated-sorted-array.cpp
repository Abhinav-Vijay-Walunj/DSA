class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans=-1,n=nums.size();
        if(n == 1)
        {
            ans=nums[0];
        }
        else if(nums[0]<nums[1] && nums[0]<nums[n-1])
        {
            ans=nums[0];
        }
        else if(nums[n-1]<nums[n-2])
        {
            ans=nums[n-1];
        }
        else
        {
            for(int i=1;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i-1] && nums[i]<nums[i+1])
            {
                ans=nums[i];
                break;
            }
        }
        }
        
        return ans;
        /*
        int n=nums.size();
        int s=0,e=n-1,m,k= -1;
        while(s<=e)
        {
            m=s+(e-s)/2;
            if(nums[m]<nums[m+1] && nums[m]<nums[m-1])
            {
                k=nums[m];
                break;
            }
            else if(nums[m]<nums[s])
                {
                    e=m-1;
                }
            else
                s=m+1;
            
        }
        if(k == -1)
            return nums[0];
        return k;*/
    }
};
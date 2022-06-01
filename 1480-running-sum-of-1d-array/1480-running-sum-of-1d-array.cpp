class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int t=0;
        
        for(int i=0;i<nums.size();i++)
        {
            t+=nums[i];
            ans.push_back(t);
        }
        return ans;
    }
};
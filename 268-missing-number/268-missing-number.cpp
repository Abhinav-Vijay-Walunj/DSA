class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j=0;
        for(auto i=nums.begin();i!=nums.end();i++)
        {
            if(j != *i)
                return j;
            j++;
        }
        return j++;
        
    }
};
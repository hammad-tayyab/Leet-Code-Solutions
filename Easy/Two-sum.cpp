class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        for(int outer = 0;outer<nums.size(); ++outer)
        {
            for (int inner = outer + 1; inner<nums.size(); ++inner)
            {
                if (nums[outer] + nums[inner] == target)
                {
                    return {outer,inner};
                }
            }
        }
        return {};
    }
};
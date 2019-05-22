class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int,int> numMap;
        std::vector<int> result;
        auto it = numMap.begin();
        for(int i = 0; i < nums.size(); i++)
        {
            it = numMap.find(target - nums[i]);
            if(it != numMap.end())
            {
                result.push_back(it->second);
                result.push_back(i);
                return result;
            }
            numMap[nums[i]] = i;
        }
        return result;
    }
};

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> v;
        for(int i=0;i<nums.size();i++){
            v[nums[i]]++;
            if(v[nums[i]]>1)
                return true;
        }

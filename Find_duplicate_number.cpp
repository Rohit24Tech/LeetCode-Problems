class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i,j;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size();i++){
            
                if(nums[i]==nums[i+1]){
                    return nums[i];
                    break;
                }
                
            
        }
        return 0;
    }
};

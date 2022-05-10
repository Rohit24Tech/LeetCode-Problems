    vector<int> ans{-1,-1};
    unordered_map<int,int> mp;
    for(int i=0;i<nums.size();i++)
    {
        int needed_element = target-nums[i];
        if(mp.find(needed_element) != mp.end())//found
        {
            ans[0] = mp[needed_element];
            ans[1] = i;
            return ans;
        }
        else{
            mp[nums[i]] = i;
        }
    }
    return ans;
}

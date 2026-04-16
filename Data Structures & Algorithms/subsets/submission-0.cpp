class Solution {
public:
void backtrack(int index,vector<int>&nums,vector<int>&current,vector<vector<int>>&res)
{
    res.push_back(current);
    for(int i=index;i<nums.size();i++)
    {
        if(i>index&&nums[i]==nums[i-1])continue;
        current.push_back(nums[i]);
        backtrack(i+1,nums,current,res);
        current.pop_back();
    }
}
    vector<vector<int>> subsets(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       vector<vector<int>>res;
       vector<int>current;
       backtrack(0,nums,current,res);
       return res; 
    }
};

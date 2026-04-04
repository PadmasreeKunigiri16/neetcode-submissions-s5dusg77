class Solution {
public:
     bool linearSearch(vector<int>&nums,int n)
     {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==n)
            {
                return true;
            }
        }
        return false;
     }
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int longest=0;
        for(int i=0;i<nums.size();i++)
        {
          int x=nums[i];
          int cnt=1;
        while(linearSearch(nums,x+1)==true)
        {
            x+=1;
            cnt+=1;
        }
        longest=max(longest,cnt);
        }
        return longest;
    }
};

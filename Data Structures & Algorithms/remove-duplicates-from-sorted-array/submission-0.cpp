class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int n=nums.size();
     set<int>st;
     for(int i=0;i<n;i++)
     {
        st.insert(nums[i]);
     }
     int k = 0;
     for(int num:st)
     {
        nums[k++] = num;
     }
     return st.size();
    }
};
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      unordered_map<string,vector<string>> mpp;
        for(auto s:strs)
        {
            string sortofs=s;
            sort(sortofs.begin(),sortofs.end());
            mpp[sortofs].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto pairs:mpp)
        {
            ans.push_back(pairs.second);
        }
        return ans;
    }
};

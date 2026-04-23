class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    vector<int>mpp(256,-1);
    int left=0,right=0;
    int maxlen=0,n=s.size();
    while(right<n)
    {
     if(mpp[s[right]]!=-1)
     left=max(mpp[s[right]]+1,left);
     mpp[s[right]]=right;
     maxlen=max(maxlen,right-left+1);
     right++;
    } 
    return maxlen;
    }
};

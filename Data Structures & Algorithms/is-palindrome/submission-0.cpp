class Solution {
public:
    bool isPalindrome(string s) {
      string filtered = "";
      for (char c : s) {
        if (isalnum(c)) filtered += tolower(c);
      }
      for(int i=0;i<(int)filtered.size()/2;i++)
      {    
        if(filtered[i]!=filtered[filtered.size()-i-1])
        {
            return false;
        }
      } 
      return true; 
    }
};
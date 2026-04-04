class Solution {
public:
    int reverse(int x) {
        int n1=INT_MAX;
        int n2=INT_MIN;
        int reversedigit=0;
      while(x)
      {
        if(reversedigit>n1/10||reversedigit<n2/10)return 0;
        int ld=x%10;
        reversedigit=reversedigit*10+ld;
        x/=10;
      } 
      return reversedigit; 
    }
};

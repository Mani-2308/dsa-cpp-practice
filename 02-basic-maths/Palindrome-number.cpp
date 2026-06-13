class Solution {
  public:
    bool isPalindrome(int n) {
        
        int revNum = 0;
        int duplicate = abs(n);
        int postive = abs(n);
        
        while(postive > 0) {
            int lastDigit = postive % 10;
            revNum = (revNum * 10) + lastDigit;
            postive = postive / 10;
        }
        
        if(revNum == duplicate) {
            return true;
        }
        else {
            return false;
        }
    }
};

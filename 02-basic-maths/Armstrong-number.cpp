class Solution {
  public:
    bool armstrongNumber(int n) {
        
        int sum = 0;
        
        int dup = n;
        
        int k = (int) (log10(n) + 1);
        
        while (n > 0) {
            
            int ld = n % 10;
            
            sum += pow(ld, k);
            
            n /= 10;
        }
        
        if(dup == sum) {
            return true;
        }
        else {
            return false;
        }
    }
};

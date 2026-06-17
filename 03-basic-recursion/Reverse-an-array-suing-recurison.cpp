class Solution {
  public:
  
    void helper(vector<int> &arr, int i) {
        
        int n = size(arr);
        
        if(i >= n / 2) {
            return;
        }
        
        swap(arr[i], arr[n - i - 1]);
        helper(arr, i + 1);
    }
    
    void reverseArray(vector<int> &arr) {
        helper(arr, 0);
    }
};

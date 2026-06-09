class Solution {
public:
    void pattern20(int n) {
        int spaces = 2 * n - 2;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j <= i; j++) {
                cout << "*";
            }
            for(int j = 0; j < spaces; j++) {
                cout << " ";
            }
            for(int j = 0; j <= i; j++) {
                cout << "*";
            }
        
            spaces -= 2;
            cout << endl;
        }
    
        int iniS = 2;
    
        for(int i = 0; i < n-1; i++) {
            for(int j = 0; j <= n-i-2; j++) {
                cout << "*";
            }
            for(int j = 0; j < iniS; j++) {
                cout << " ";
            }
            for(int j = 0; j <= n-i-2; j++) {
                cout << "*";
            }
        
            iniS += 2;
            cout << endl;
        }
    }
};

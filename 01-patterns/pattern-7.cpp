class Solution {
public:
    void pattern7(int n) {

        for(int i = 1; i <= n; i++) {
            for(int j = 0; j < n - i; j++) {
                cout << " ";
            }
            for(int k = 1; k <= (i + i -1); k++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

class Solution {
public:
    void pattern8(int n) {

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j < i; j++) {
                cout << " ";
            }
            for(int k = 1; k <= (n - i) * 2 + 1; k++) {
                cout << "*";
            }
            cout << endl;

        }
    }
};

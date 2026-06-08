class Solution {
public:
    void pattern15(int n) {
        for(int i = 0; i < n; i++) {
            int num = 65;
            for(int j = n - i; j >= 1; j--) {
                char ch = num;
                cout << ch;
                num++;
            }

            cout << endl;
        }
    }
};

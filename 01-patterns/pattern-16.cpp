class Solution {
public:
    void pattern16(int n) {

        int num = 65;
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= i; j++) {
                char ch = num;
                cout << ch;
            }

            cout << endl;
            num++;
        }

    }
};

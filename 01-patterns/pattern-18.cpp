class Solution {
public:
    void pattern18(int n) {
        for(int i = 0; i < n; i++) {
            char ch = (64 + n) - i;
            for(int j = 0; j <= i; j++) {
                if(j > 0) {
                    cout << " ";
                }
                cout << ch;
                ch++;
            }
            cout << endl;
        }
    }
};

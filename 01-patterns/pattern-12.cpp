void numberCrown(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        for(int k = 1; k <= (n * 2) - (i + i); k++) {
            cout << " ";
        }
        for(int l = i; l >= 1; l--) {
            cout << l << " ";
        }

        cout << endl;
    }
}

void nBinaryTriangle(int n) {
    
    int pattern = 1;

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            pattern = 1;
        }
        else {
            pattern = 0;
        }

        for(int j = 0; j <= i; j++) {
            cout << pattern << " ";
            pattern = 1 - pattern;
        }
        cout << endl;
    }
}

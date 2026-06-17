bool helper(string& str, int i) {
    int n = str.length();

    if(i >= n / 2) return true;

    if(str[i] != str[n - i - 1]) {
        return false;
    }
    return helper(str, i + 1);
}

bool isPalindrome(string& str) {
    return helper(str, 0);
}

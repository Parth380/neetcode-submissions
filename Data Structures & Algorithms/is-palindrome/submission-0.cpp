class Solution {
private:
    bool validChar(char ch) {
        if ((ch >= 'a' && ch <= 'z') || 
            (ch >= 'A' && ch <= 'Z') || 
            (ch >= '0' && ch <= '9')) {
            return true;
        }
        return false;
    }

    
    char toLowerCase(char ch) {
        if (ch >= 'A' && ch <= 'Z') {
            return ch - 'A' + 'a';
        }
        return ch;
    }

    // Check if string is palindrome
    bool checkPalindrome(string s) {
        int start = 0;
        int end = s.length() - 1;

        while (start <= end) {
            if (s[start] != s[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }

public:
    bool isPalindrome(string s) {
        // Step 1: Build a filtered string with only lowercase alphanumeric chars
        string temp = "";
        for (int i = 0; i < s.length(); i++) {
            if (validChar(s[i])) {
                temp.push_back(toLowerCase(s[i]));
            }
        }

        // Step 2: Check palindrome on the cleaned string
        return checkPalindrome(temp);
    }
};
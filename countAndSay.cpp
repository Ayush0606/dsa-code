#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        if(n == 1) return "1";

        string s = countAndSay(n - 1);
        string ans = "";
        int count = 1;

        for(int i = 0; i < s.length(); i++) {
          
            if(i + 1 < s.length() && s[i] == s[i + 1]) {
                count++;
            } else {
                ans += to_string(count) + s[i];
                count = 1;  // reset count for next char
            }
        }

        return ans;
    }
};

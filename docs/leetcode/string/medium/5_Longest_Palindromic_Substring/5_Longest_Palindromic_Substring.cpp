class Solution {
public:
    string longestPalindrome(string s) {
        string res = "";
        int resLen = 0;
        for(int i=0; i<s.size(); i++){
            // if length of return string is odd
            int l,r;
            l=r=i;
            while(l>=0 && r<s.size() && s[l]==s[r]){
                if((r-l+1)>resLen){
                    resLen = r-l+1;
                    res = s.substr(l,resLen);
                }
                l--;
                r++;
            }
            // if length of return string is even
            l=i;
            r=i+1;
            while(l>=0 && r<s.size() && s[l]==s[r]){
                if((r-l+1)>resLen){
                    resLen = r-l+1;
                    res = s.substr(l,resLen);
                }
                l--;
                r++;
            }
        }
        return res;
    }
};

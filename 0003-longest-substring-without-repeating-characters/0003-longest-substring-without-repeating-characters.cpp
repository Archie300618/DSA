class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        set<char>st;
        int right=0;
        int left=0;
        int maxlength=0;
        while(right<s.size()){
            while(st.find(s[right])!=st.end()){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            maxlength=max(maxlength,right-left+1);
            right++;
       }
       return maxlength;
    }
};
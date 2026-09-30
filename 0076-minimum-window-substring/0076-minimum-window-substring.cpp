class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size()>s.size()){
            return "";
        }
        unordered_map<char,int>need,window;
        int left=0;
        int have=0;
        int start=0;
        int minlen=INT_MAX;
        for(char c:t){
            need[c]++;
        }
        for(int right=0;right<s.size();right++){
            char ch=s[right];
            window[ch]++;
            if(need.count(ch) && window[ch]==need[ch]){
                have++;
            }
            while(have==need.size()){
                if(right-left+1<minlen){
                    minlen=right-left+1;
                    start=left;
                }
                char leftchar=s[left];
                window[leftchar]--;
                if(need.count(leftchar) && window[leftchar]<need[leftchar]){
                    have--;
                }
                left++;
            }
        }
        if(minlen==INT_MAX){
            return "";
        }
        return s.substr(start,minlen);
    }
};
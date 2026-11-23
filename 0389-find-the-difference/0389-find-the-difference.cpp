class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>ump;
        for(char x:s){
            ump[x]++;
        }
        for(int i=0;i<t.length();i++){
            if(ump[t[i]]>0){
                ump[t[i]]--;
            }else{
                return t[i];
            }
        }
        return ' ';
    }
};
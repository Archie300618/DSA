class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>ump = {
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int ans=0;
        for(int i=0;i<s.length();i++){
            int current=ump[s[i]];
            int next=0;
            if(i+1<s.length()){
                next=ump[s[i+1]];
            }
            if(current<next){
                ans-=current;
            }else{
                ans+=current;
            }
        }
        return ans;
    }
};
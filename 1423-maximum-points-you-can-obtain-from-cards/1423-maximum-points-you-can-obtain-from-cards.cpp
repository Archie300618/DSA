class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        if(k<0 || k>n){
            return -1;
        }
        if(k==0){
            return 0;
        }
        if(k==n){
            return accumulate(cardPoints.begin(),cardPoints.end(),0);
        }
        int currentscore=0;
        for(int i=0;i<k;i++){
            currentscore+=cardPoints[i];
        }
        int maxScore=currentscore;
        int right=n-1;
        for(int left=k-1;left>=0;left--){
            currentscore-=cardPoints[left];
            currentscore+=cardPoints[right];
            right--;
        if(currentscore>maxScore){
            maxScore=currentscore;
        }
        }
        return maxScore;
    }
};
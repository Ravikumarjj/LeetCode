class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int leftsum=0,rightsum=0,maxPoints=0;
        for(int i=0;i<k;i++){
            leftsum+=cardPoints[i];
            maxPoints=leftsum;
        }
        int r=n-1;
        for(int i=k-1;i>=0;i--){
            leftsum-=cardPoints[i];
            rightsum+=cardPoints[r];
            r--;
            maxPoints=max(maxPoints,leftsum+rightsum);
        }
        return maxPoints;
    }
};
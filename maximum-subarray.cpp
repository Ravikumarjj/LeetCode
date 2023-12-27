class Solution {
public:
    int maxSubArray(vector<int>& nums) {
          int max_sum=INT_MIN ;
    int sum=0 ;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(sum<0){
          
            if(sum>max_sum){
                max_sum=sum ;

            }
            sum=0 ;
        }
        else if(sum>=0 and max_sum<sum){
            max_sum=sum;
        }
    }
    return max_sum ;
    

        
    }
};
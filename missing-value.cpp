int missingNumber(vector<int>& nums){
    int n= nums.size();
    int a = n*(n+1)/2;
    int ans = 0;
    for ( int i=0; i< n; i++){
        ans = ans + nums[i];
    }
    return a-ans;
}
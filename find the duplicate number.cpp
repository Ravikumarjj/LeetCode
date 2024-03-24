class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int n=nums.size();
        // unordered<int,int> map;
        // for(int i=0;i<=n;i++)
        // {
        //     map[a[i]]++;
        //     if(map[a[i]]>1)
        //         return a[i];
        // }
        // return 0;              //using hash map
        for(int i=0;i<n;i++)
        {
            nums[nums[i]%n]+=n;
        }
        for(int i=0;i<n;i++)
            if(nums[i]/n>1)
                return i;         //array modification
        return 0;

    }
};
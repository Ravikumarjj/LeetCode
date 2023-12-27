class Solution {
public:
    int pivotIndex(vector<int>& nums) {
		vector<int> psums{0};
		for (int num : nums) psums.push_back(psums.back()+num);


		for(int i = 0; i<psums.size()-1; i++){
			if(psums[i] == psums[nums.size()] - psums[i+1]){
				return i;
			}
		}
		return -1;
	}
};
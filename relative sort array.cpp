class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> mp;
        sort(arr1.begin(),arr1.end());
        for( auto n: arr1){
            mp[n]++;
        }
        int i=0;
        for(auto n: arr2){
            while(mp[n]){
                arr1[i++]=n;
                mp[n]--;
            }
            if(mp[n]==0)mp.erase(n);
        }
        for(auto n: mp){
            while(n.second){
                arr1[i++]=n.first;
                n.second--;
            }
        }
        return arr1;
    }
};
class Solution {
public:
int mostWordsFound(vector& sentences) {
int ans=0;
for(auto str:sentences){
int c=0;
for(int i=0;i<str.size();i++){
if(str[i]==' ') c++;
}
ans=max(ans,c+1);
}
return ans;
}
};
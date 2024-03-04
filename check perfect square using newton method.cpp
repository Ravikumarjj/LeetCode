#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
// as we all know sum of consecutive odd number( starting from 1 )always led to perfect square
// for example
// 1 perfect square
// 1+3 = 4 perfect square
// 1+3+5= 9 perfect square
// 1+3+5+7= 16 perfect square it is called Newton Method
    bool isPerfectSquare(int num) {
        int a=1;
        while(num>0)
        {
        num=num-a;
        a=a+2;
        }
        return num==0;
      }
};

int main(){
    int n;
    cin>>n;
    Solution obj;
    cout<<obj.isPerfectSquare(n);
}
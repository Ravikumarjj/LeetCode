#include <bits/stdc++.h>
using namespace std;
int setBits(int N){
    // Write your code here.
    int k =0;
    int t = N;
    while(t){
      k++;
      if((t&1)!=1) break;    //checking if last bit is unset or not
      t >>=1;
    }
    return (N | (1<<k-1));

}
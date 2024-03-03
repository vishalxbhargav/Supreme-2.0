#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>& coins, int amount) {
    if(amount==0) return 0;
    if(amount<0) return INT_MAX;
    int mini = INT_MAX;
    for(int i=0; i<coins.size(); i++) {
        if(coins[i] <= amount) {
            int recAns = solve(coins, amount - coins[i]);
            if(recAns != INT_MAX){
                mini = min(mini, recAns+1);
            }    
        }
    }
    return mini;
}
int coinChange(vector<int>& coins, int amount) {
    int ans = solve(coins, amount);
    if(ans == INT_MAX)
    return -1;
    else
    return ans;  
}
int main(){
    vector<int>coin={1,2,5};
    int amount=11;
    cout<<"result : "<<coinChange(coin,amount);
}
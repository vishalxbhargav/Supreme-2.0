#include<iostream>
#include<vector>
using namespace std;
 int findJudge(int n, vector<vector<int>>& trust) {
	int sum=0;
        for(int i=1;i<n+1;i++) sum+=i;
        for(auto x:trust){
            sum-=x[0];
        }
        return sum==0?-1:sum;
}
int main(){
	vector<vector<int>> trust={ {1,2},{2,3}};
	int n=3;
	cout<<findJudge(n,trust);
	return 0;
}
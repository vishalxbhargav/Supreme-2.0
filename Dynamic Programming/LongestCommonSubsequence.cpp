#include<iostream>
#include<vector>
using namespace std;
 int solveUsingTabulationSO(string a, string b) {
        //vector<vector<int> > dp(a.length()+1, vector<int>(b.length()+1, 0));
        vector<int> curr(a.length()+1, 0);
        vector<int> next(a.length()+1, 0);

    for(int j_index=b.length()-1; j_index>=0; j_index--) {
        for(int i_index=a.length()-1; i_index>=0; i_index--) {
                    int ans = 0;
                    if(a[i_index] == b[j_index]) {
                        ans = 1 + next[i_index+1];
                    }
                    else {
                        ans = 0 + max(next[i_index],curr[i_index+1]);         
                    }
                    curr[i_index] = ans;
            }
            //shifting
            next= curr;
        }
        return curr[0];
    }
int usingSpaceOptimization(string& text1,string& text2){
	vector<int>curr(text1.size()+1,0);
	vector<int>next(text1.size()+1,0);
	for(int j=text2.size()-1;j>=0;j--){
		for(int i=text1.size()-1;i>=0;i--){
			int ans=0;
			if(text1[i]==text2[j]) ans=1+next[i+1];
			else ans=max(next[i],curr[i+1]);
			curr[i]=ans;
		}
		next=curr;
	}
	return curr[0];
}
int usingTabulation(string& text1,string& text2){
	vector<vector<int>>dp(text1.size()+1,vector<int>(text2.size()+1,0));
	for(int i=text1.size()-1;i>=0;i--){
		for(int j=text2.size()-1;j>=0;j--){
			int ans=0;
			if(text1[i]==text2[j]){
				ans=1+dp[i+1][j+1];
			}else{
				ans=max(dp[i+1][j],dp[i][j+1]);
			}
			dp[i][j]=ans;
		}
	}
	return dp[0][0];
}
int usingMemo(string& text1,int i,string& text2,int j,vector<vector<int>>&dp){
	if(i>=text1.size()|| j>=text2.size()) return 0;
	if(dp[i][j]!=-1) return dp[i][j];
	int ans=0;
	if(text1[i]==text2[j]){
		ans=1+usingMemo(text1,i+1,text2,j+1,dp);
	}else{
		ans=max(usingMemo(text1,i+1,text2,j,dp),usingMemo(text1,i,text2,j+1,dp));
	}
	return dp[i][j]=ans;
}
int usingRec(string& text1,int i,string& text2,int j){
	//base condition
	if(i>=text1.size()|| j>=text2.size()) return 0;
	int ans=0;
	if(text1[i]==text2[j]){
		ans=1+usingRec(text1,i+1,text2,j+1);
	}else{
		ans=max(usingRec(text1,i+1,text2,j),usingRec(text1,i,text2,j+1));
	}
	return ans;
}
int longestComman(string& text1,string& text2){
	// return usingRec(text1,0,text2,0);
	// vector<vector<int>>dp(text1.size()+1,vector<int>(text2.size()+1,-1));
	// return usingMemo(text1,0,text2,0,dp);
	// return usingTabulation(text1,text2);
	return usingSpaceOptimization(text1,text2);
	// return solveUsingTabulationSO(text1,text2);
}
int main(){
	string text1="abcde";
	string text2="ace";
	cout<<"Ans : "<<longestComman(text1,text2);
	return 0;
}
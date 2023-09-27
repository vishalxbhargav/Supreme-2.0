#include<bits/stdc++.h>
using namespace std;
vector<int> commonElement(vector<int>v1,vector<int>v2,vector<int>v3){
    vector<int>ans;
    int i=0,j=0,k=0;

    while(i<v1.size()&&j<v2.size()&&k<v3.size()){
        if(v1[i]==v2[j]&&v2[j]==v2[k]){
            ans.push_back(v1[i]);
            cout<<v1[i]<<endl;
            i++;j++;k++;   
        } 
        else if(v1[i]<v2[j]) i++;
        else if(v2[j]<v3[k]) j++;
        else k++;
    }
    return ans;
}
int main(){
    vector<int> v1={1,12,13,14,15,16};
    vector<int> v2={0,1,22,23,24,25,26};
    vector<int> v3={1,23,33,43,53,63,9};
    vector<int>ans=commonElement(v1,v2,v3);
    for(auto i:ans) cout<<" "<<i;

}
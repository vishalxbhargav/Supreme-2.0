#include<bits/stdc++.h>
using namespace std;
string removeDuplicate(string s){
    unordered_map<char, int> exists;
 
    string ans = "";
    for (int i = 0; i <s.size(); i++) {
        if (exists.find(s[i]) == exists.end()) {
            ans.push_back(s[i]);
            exists[s[i]]++;
        }
    }
    return ans;
}
int main(){
    //geksfor
    cout<<endl<<"result : "<<removeDuplicate("geeksforgeeks");
}
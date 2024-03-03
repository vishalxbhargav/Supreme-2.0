#include<iostream>
#include<vector>
using namespace std;
bool solve(string&s,int si,string&p,int pi){
    //base
    if(si==s.size()&&pi==p.size()) return true;
    if(si==s.size()&&pi<p.size()){
        while(pi<p.size()) if(p[pi++]!='*') return false;
        return true;
    }

    //actual logic
    //single char matching
    if(s[si]==p[pi]||'?'==p[pi]){
        return solve(s,si+1,p,pi+1);
    }
    //multichar matching
    if(p[pi]=='*'){
        //treat as '*' as empty or null
        bool caseA=solve(s,si,p,pi+1);
        //let '*' consume one char
        bool caseB=solve(s,si+1,p,pi);
        return caseA||caseB;
    }
    //char doesn't match
    return false;

}
bool isMatching(string&s,string&p){
    int pi=0;
    int si=0;
    return solve(s,si,p,pi);
}
int main(){
    string s="abcdef";
    string p="a?c*f";
    if(isMatching(s,p)) cout<<"Matching";
    else cout<<"Not Matching";
    return 0;
}
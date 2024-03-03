#include<iostream>
using namespace std;
bool solve(string& str,int s,int e ){
    if(s>=e) return true;
    if(str[e]!=str[s]) return false;
    return solve(str,s+1,e-1);
}
bool checkPalindrom(string s){
    return solve(s,0,s.size()-1);
}
int main(){
    string s="racecar";
    if(checkPalindrom(s)) cout<<"palindromic";
    else cout<<"not palindromic";
    return 0;
}
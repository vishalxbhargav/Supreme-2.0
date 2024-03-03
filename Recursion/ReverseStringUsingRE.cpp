#include<iostream>
using namespace std;
string reverseString(string s,string& ans,int i){
    if(i>=s.size()) return ans;
    char ch=s[i];
    reverseString(s,ans,i+1);
    return ans+=ch;
}
int main(){
    string s="vishalxbhargav";
    string ans="";
    cout<<reverseString(s,ans,0);
    return 0;
}
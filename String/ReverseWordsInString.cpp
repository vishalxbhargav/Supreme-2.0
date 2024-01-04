#include<bits/stdc++.h>
using namespace std;
void reverseStr(string& s,int i,int j){
    while(i<j) swap(s[i++],s[j--]);
}
string reverseWordsInString(string& s){
    int i=0,j=0;
    for(i=0;i<s.length();i++){
        if(s[i]==' '){
            reverseStr(s,j,i-1);
            j=i+1;
        }
    }
    reverseStr(s,j,i-1);
    return s;
}
int main(){
    string s="Let's code Togather on Leetcode";
    cout<<"result : ";
    cout<<reverseWordsInString(s);
    
}
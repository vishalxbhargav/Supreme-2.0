#include<iostream>
using namespace std;
void upperCase(string& s){
    for(int i=0;i<s.length();i++) if(s[i]>='a'&&s[i]<='z') s[i]-=32;
}
void lowerCase(string& s){
    for(int i=0;i<s.length();i++) if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
}
int main(){
    string s="madam";
    upperCase(s);
    cout<<"Converted String :"<<s<<endl;
    lowerCase(s);
    cout<<"Converted String :"<<s<<endl;
    return 0;
}
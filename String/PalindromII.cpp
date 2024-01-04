#include<iostream>
using namespace std;
bool isPalindrom(string str,int s,int e){
    while(s<e){} if(str[s++]!=str[e--]) return false;
    return true;
}
bool palindromII(string str){
    int s=0,e=str.length()-1;
    while(s<e){
        if(str[s++]!=str[e--]){
            return isPalindrom(str,s+1,e)||isPalindrom(str,s,e+1);
        } 
    } 
    return true;
}
int main(){
    string s="madbam";
    string s1="himalaya";
    if(palindromII(s)) cout<<"Given String is Palindrom";
    else cout<<"Given String is not Palindrom";
    return 0;
}
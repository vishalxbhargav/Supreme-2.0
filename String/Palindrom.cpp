#include<iostream>
using namespace std;
bool isPalindrom(string str){
    int s=0,e=str.length()-1;
    while(s<e) if(str[s++]!=str[e--]) return false;
    return true;
}
int main(){
    string s="madam";
    string s1="himalaya";
    if(isPalindrom(s1)) cout<<"Given String is Palindrom";
    else cout<<"Given String is not Palindrom";
    return 0;
}
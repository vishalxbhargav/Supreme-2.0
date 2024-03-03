#include<iostream>
using namespace std;
void removeOccur(string& s,string& part){
    int found=s.find(part);
    if(found!=string::npos){
        s=s.substr(0,found)+s.substr(found+part.size(),s.size());
        removeOccur(s,part);
    }
}
string removeOccurences(string s,string part){
    removeOccur(s,part);
    return s;
}
int main(){
    string s="daabcbaabcbc";
    string part="abc";
    cout<<"ans : "<<removeOccurences(s,part);
    return 0;
}
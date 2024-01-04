#include<bits/stdc++.h>
using namespace std;
void validParanthisis(string& str,int open,int close){
    if(open==0&&close==0){
            cout<<str<<endl;
            return;
        }
        if(open!=0){
            str.push_back('(');
            validParanthisis(str,open-1, close);
            str.pop_back();
        }
        if(open<close){
            str.push_back(')');
            validParanthisis(str,open, close-1);
            str.pop_back();
        }
        return;
}
int main(){
    string str="";
    validParanthisis(str,3,3);
    return 0;
}
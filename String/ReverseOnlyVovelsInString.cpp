#include<bits/stdc++.h>
using namespace std;
bool isvovel(char ch){
    return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';

}
string reverseVovel(string& str){
    int s=0,e=str.length()-1;
    while(s<e){
        if(isvovel(str[s])&&isvovel(str[e])){
            cout<<str[s]<<" "<<str[e]<<endl;
            swap(str[s],str[e]);
            cout<<str[s]<<" "<<str[e]<<endl;
            s++;e--;
        }else  if(!isvovel(str[s])) s++;
        else e--;
    }
    return str;
}
int main(){
    string s="hello";
    cout<<"result : ";
    cout<<reverseVovel(s);   
}
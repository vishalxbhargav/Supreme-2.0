#include<iostream>
#include<algorithm>
using namespace std;
string addRE(string num1,string num2,int p1,int p2,int carry=0){
    if(p1<0&&p2<0){
        if(carry!=0) return string(1,carry+'0');
        return "";
    }
    int n1=(p1>=0?num1[p1]:'0')-'0';
    int n2=(p2>=0?num2[p2]:'0')-'0';
    string ans="";
    ans.push_back((n1+n2+carry)%10+'0');
    carry=(n1+n2+carry)/10;
    ans+=addRE(num1,num2,p1-1,p2-1,carry);
    return ans;
}
string addString(string num1,string num2){
    string ans=addRE(num1,num2,num1.size()-1,num2.size()-1,0);
    reverse(ans.begin(),ans.end());

    return ans;
}
int main(){
    string num1="123";
    string num2="11";
    cout<<addString(num1,num2);
    return 0;
}